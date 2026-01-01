# Student Information System with Docker Containers

[cite_start]This project is a distributed student management system developed using C++, PostgreSQL, and Docker[cite: 1, 13]. [cite_start]It features a containerized architecture where a C++ application interacts with a persistent PostgreSQL database[cite: 15, 16].

## 🚀 Quick Start
To run the system locally:
1. Clone the repository.
2. [cite_start]Run `docker-compose up --build`[cite: 219].

---

## 📅 Project Roadmap & Task Distribution

### [cite_start]Week 1: Project Start and Planning [cite: 166]
* [cite_start]**Muti (PM):** GitHub setup, repository creation, and team invitation[cite: 172].
* [cite_start]**Sefa (DevOps):** Docker environment research and Docker Hub account setup[cite: 173].
* [cite_start]**İsmail (Developer):** Project structure planning and C++ dependency research[cite: 174].

### [cite_start]Week 2: Docker Container Creation [cite: 178]
* [cite_start]**Muti (PM):** Branch strategy implementation (`main`, `develop`, `feature/*`) and Wiki management[cite: 69, 73].
* [cite_start]**Sefa (DevOps):** Creation of `docker-compose.yml` for PostgreSQL and C++ services[cite: 100]. [cite_start]Setup for database volumes[cite: 109].
* [cite_start]**İsmail (Developer):** Writing the Ubuntu-based `Dockerfile` and integrating `libpqxx`[cite: 99, 136]. Verified "Hello World" on Docker.

### [cite_start]Week 3: C++ Application Development (Current) 
* **Muti (PM):**
    * [cite_start]Managing Pull Requests and performing mandatory code reviews[cite: 77, 92].
    * [cite_start]Updating GitHub Project boards and Task tracking[cite: 70, 94].
    * [cite_start]Maintaining Weekly Activity Reports and Wiki[cite: 73, 93].
* **Sefa (DevOps):**
    * [cite_start]Pushing updated application images to Docker Hub[cite: 120, 196].
    * [cite_start]Managing container resource limits and networking[cite: 110, 114].
* **İsmail (Developer):**
    * [cite_start]Implementing core CRUD operations (Save, List, Update, Delete)[cite: 137, 193].
    * [cite_start]Database transaction management and error handling[cite: 146, 147].
    * [cite_start]Writing unit tests for C++ features[cite: 150, 195].

---

## 🐳 Docker Hub Repositories
* [cite_start]**Project Organization:** [https://hub.docker.com/u/sefaercanli](https://hub.docker.com/u/sefaercanli) [cite: 222]
* [cite_start]**C++ App Image:** `sefaercanli/sp-sis-project-app:v1.0` [cite: 239]
* [cite_start]**PostgreSQL Image:** `sefaercanli/sp-sis-project-postgres:v1.0` [cite: 238]

---

## 🛠️ Technical Requirements
* [cite_start]**Language:** C++ (C++11 or higher)[cite: 5, 228].
* [cite_start]**Database:** PostgreSQL via `libpqxx`[cite: 15, 225].
* [cite_start]**Containerization:** Docker & Docker Compose[cite: 6].
* [cite_start]**CI/CD:** GitHub Actions[cite: 103, 234].