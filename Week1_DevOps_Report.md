\# Week 1: Docker and DevOps Infrastructure Plan



\## Objective

To plan the Docker and DevOps infrastructure of the project and to establish a foundation for the system architecture and automation processes.



\## Docker System Architecture Plan

The project is designed to run via two main containers:



\### 1. PostgreSQL Database Container

\- \*\*Purpose:\*\* To store student information.

\- \*\*Persistence:\*\* Data persistence will be ensured using Docker Volumes to prevent data loss.

\- \*\*Configuration:\*\* Will be managed via `POSTGRES\\\_DB`, `POSTGRES\\\_USER`, and `POSTGRES\\\_PASSWORD` environment variables.

\- \*\*Image Name:\*\* `\\\[sefa ercanli]/sis-project-postgres`



\### 2. C++ Application Container

\- \*\*Purpose:\*\* To run the Student Information System application.

\- \*\*Network:\*\* Will connect to the PostgreSQL container via a Docker Network.

\- \*\*Image Name:\*\* `\\\[sefa ercanli]/sis-project-app`



\## CI/CD (GitHub Actions) Research

\- Research was conducted on compiling C++ projects using GitHub Actions.

\- \*\*Planned Workflow:\*\*

  1. Checkout code

  2. Build

  3. Test (In upcoming weeks)

\- The goal is to automate the building of Docker images.



\*\*Prepared by:\*\* Öğrenci 2 (Docker \& DevOps Engineer)

\*\*Date:\*\* 17/12/2025

