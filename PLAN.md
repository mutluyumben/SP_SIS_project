--
Anladım, hiçbir görselleştirme veya özel Markdown biçimlendirmesi (kalın yazı, tablo vb.) olmadan, doğrudan kopyalayıp bir Not Defterine (.txt) yapıştırabileceğin saf metin (plaintext) hali aşağıdadır. Dokümandaki tüm detaylar sırasıyla eklenmiştir:

SYSTEM PROGRAMMING TERM PROJECT - FULL DOCUMENT CONTENT

PROJECT NAME: STUDENT INFORMATION SYSTEM WITH DOCKER CONTAINERS COURSE: SYSTEM PROGRAMMING PROJECT DURATION: 4 WEEKS PROGRAMMING LANGUAGE: C++

PROJECT DESCRIPTION The objective of this project is to develop a distributed system using Ubuntu, Git, GitHub, and Docker. The project consists of a database container (PostgreSQL) and an application container (C++ application). The C++ application will manage student information (Save, List, Update, Delete) and interact with the PostgreSQL database.

IMPORTANT DATES

Project Start: 12/12/2025

Week 1 Check-in: 19/12/2025 (Initial setup, team formation)

Week 2 Check-in: 26/12/2025 (Docker containers and database setup)

Week 3 Check-in: 02/01/2026 (C++ basic functions and DB connection)

Final Submission: 09/01/2026 (All codes, documentation, and Docker Hub links)

Presentations: 14/01/2026 - 16/01/2026

MANDATORY RULES

Official Emails: All GitHub and Docker Hub accounts must be created using official school emails.

Commit Messages: Must be meaningful and follow a standard (e.g., "feat: add student insert functionality").

Pull Requests (PR): All changes must be made via PR. No direct pushes to main or develop branches are allowed.

Reviews: Each PR must be reviewed and approved by at least one other team member.

Academic Integrity: Plagiarism is strictly prohibited. All team members must contribute to their assigned tasks.

Late Submissions: Will result in point deductions or disqualification.

TEAM ROLES AND RESPONSIBILITIES

STUDENT 1: PROJECT MANAGER

Manage GitHub Repository and Branch Strategy (main, develop, feature/*).

Set up and maintain GitHub Projects (Milestones, Issues, Task tracking).

Submit Weekly Activity Reports to GitHub Wiki every Monday by 23:59.

Review and approve Pull Requests.

Prepare documentation: README.md, MANUAL.md, INSTALL.md, CONTRIBUTING.md.

Minimum Activity Goals: 20+ commits, 10+ issues, 8+ PRs, 15+ Reviews, 15+ Wiki edits.

STUDENT 2: DOCKER AND DEVOPS ENGINEER

Create Dockerfile and docker-compose.yml.

Set up GitHub Actions for CI/CD (.github/workflows).

Manage Docker volumes, networks, and health checks.

Configure container logging and monitoring.

Push images to Docker Hub using correct naming conventions.

Minimum Activity Goals: 15+ commits, 8+ issues, 10+ PRs, 10+ Reviews, 15+ Project board updates.

STUDENT 3: C++ DEVELOPER

Organize source code (src/ and include/ directories).

Create CMakeLists.txt or Makefile.

Implement database connection using libpqxx.

Develop CRUD operations (Save, List, Update, Delete).

Implement error handling, input validation, and unit tests.

Perform memory leak checks and code formatting.

Minimum Activity Goals: 20+ commits, 8+ issues, 12+ PRs, 10+ Reviews, 15+ Project board updates.

TECHNICAL REQUIREMENTS

Dockerization: Two separate containers (App and Database) communicating over a private network.

Persistence: Use Docker volumes for PostgreSQL data storage.

Database: PostgreSQL with libpqxx library for C++.

CI/CD: Automation via GitHub Actions for testing and building.

Docker Hub Naming: [school-username]/[project-name]-[component]:[tag]

EVALUATION CRITERIA (Total: 100 Points)

A. GITHUB ACTIVITY AND CODE QUALITY (70 Points)

Individual Contribution (50 pts):

Commit Quality and Messages (15 pts)

Pull Request Management (15 pts)

Code Review Participation (10 pts)

Issue Management (10 pts)

Documentation (README, Wiki, etc.) (10 pts)

Team Technical Score (20 pts):

Docker Containers working correctly (5 pts)

Database and CRUD functionality (5 pts)

Code Quality and Consistency (5 pts)

CI/CD Automation working (5 pts)

B. PRESENTATION AND DEMO (30 Points)

Presentation Structure and Content (8 pts)

Technical Demo Quality (10 pts)

Q&A Session Performance (7 pts)

Team Coordination during presentation (5 pts)

SUBMISSION CHECKLIST

Repository URL submitted to the instructor.

main and develop branches are correctly structured.

All mandatory documentation files (README, MANUAL, INSTALL) exist.

Docker Hub repositories are public and images are up-to-date.

Weekly activity reports are present on the Wiki.