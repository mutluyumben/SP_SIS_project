<<<<<<< HEAD
# Start from GCC image
FROM gcc:latest

# Install CMake and Postgres library
# libpqxx is needed for connecting to database
RUN apt-get update && apt-get install -y \
    cmake \
    libpqxx-dev \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app

# Copy project files
COPY . .

# Build the project
RUN mkdir -p build
WORKDIR /app/build
RUN cmake .. && make

# Run the application
CMD ["./sp-sis-app"]

=======
# Stage 1: Build
FROM ubuntu:22.04 AS builder

# Install dependencies
RUN apt-get update && apt-get install -y build-essential cmake libpqxx-dev git

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
>>>>>>> 93c6939bf669879a9af108d27bb2b3fc1a06dae5
