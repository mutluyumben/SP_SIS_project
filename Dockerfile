# Stage 1: Build
FROM ubuntu:22.04 AS builder

# Install dependencies
RUN apt-get update && apt-get install -y build-essential cmake libpqxx-dev git pkg-config

WORKDIR /app
COPY . .

# Build the application
RUN mkdir -p build && cd build && cmake .. && make

# Stage 2: Runtime
FROM ubuntu:22.04

# Install runtime dependencies
RUN apt-get update && apt-get install -y libpqxx-6.4 && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY --from=builder /app/build/sis_app .

# Default command
CMD ["./sis_app"]
