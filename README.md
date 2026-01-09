# Student Information System with Docker Containers

This project is a distributed student management system developed using C++, PostgreSQL, and Docker. It features a containerized architecture where a C++ application interacts with a persistent PostgreSQL database.

## 🚀 Quick Start
To run the system locally:
1. Clone the repository.
2. Run `docker-compose up --build`.

---

## 📅 Project Roadmap & Task Distribution

### Week 1: Project Start and Planning
* **Muti (PM):** GitHub setup, repository creation, and team invitation.
* **Sefa (DevOps):** Docker environment research and Docker Hub account setup.
* **İsmail (Developer):** Project structure planning and C++ dependency research.

### Week 2: Docker Container Creation
* **Muti (PM):** Branch strategy implementation (`main`, `develop`, `feature/*`) and Wiki management.
* **Sefa (DevOps):** Creation of `docker-compose.yml` for PostgreSQL and C++ services. Setup for database volumes.
* **İsmail (Developer):** Writing the Ubuntu-based `Dockerfile` and integrating `libpqxx`. Verified "Hello World" on Docker.

### Week 3: C++ Application Development
* **Muti (PM):**
    * Managing Pull Requests and performing mandatory code reviews.
    * Updating GitHub Project boards and Task tracking.
    * Maintaining Weekly Activity Reports and Wiki.
* **Sefa (DevOps):**
    * Pushing updated application images to Docker Hub.
    * Managing container resource limits and networking.
* **İsmail (Developer):**
    * Implementing core CRUD operations (Save, List, Update, Delete).
    * Database transaction management and error handling.
    * Writing unit tests for C++ features.

### Week 4: Testing, Documentation, and Presentation (Current)
* **Muti (PM):**
    * Finalizing `MANUAL.md`, `INSTALL.md`, and `README.md`.
    * Creating release tag `v1.0` on GitHub.
    * Preparing presentation slides and demo script.
* **Sefa (DevOps):**
    * Performing integrated system testing with Docker Compose.
    * Tagging and pushing final Docker images to Docker Hub (`v1.0`).
    * Verifying publicly accessible Docker Hub links.
* **İsmail (Developer):**
    * Running full system tests and checking for memory leaks.
    * Verifying all CRUD operations and database persistence.
    * Assisting in the technical demo preparation.[cite: 150, 195].

---

## 🐳 Docker Hub Repositories
* **Project Organization/DevOps (Sefa):** [https://hub.docker.com/u/sefaercanli](https://hub.docker.com/u/sefaercanli)
* **Project Manager (Muti):** [https://hub.docker.com/u/imutluambar](https://hub.docker.com/u/imutluambar)
* **Developer (Ismail):** [https://hub.docker.com/u/ismailecrr](https://hub.docker.com/u/ismailecrr)

### Project Images
* **C++ App Image:** `sefaercanli/sp-sis-project-app:v1.0`
* **PostgreSQL Image:** `sefaercanli/sp-sis-project-postgres:v1.0`

---

## 🛠️ Technical Requirements
* **Language:** C++ (C++11 or higher)
* **Database:** PostgreSQL via `libpqxx`
* **Containerization:** Docker & Docker Compose
* **CI/CD:** GitHub Actions