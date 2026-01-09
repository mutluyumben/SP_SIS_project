System Programming Term Project: Student Information System with Docker Containers
•	Project General Information
o	Course: System Programming
o	Duration: 4 Weeks
o	Language: C++
o	Technologies: Ubuntu, Git, GitHub, Docker
o	Team Size: 3 people (1 Project Manager)
o	Mandatory: GitHub account must be created with official school email
o	Evaluation: 70% GitHub Activity + 30% Presentation
•	Project Objective
In this project, you will develop a distributed system using Ubuntu, Git, GitHub, and Docker technologies learned during the course. The project aims to develop your teamwork, version control, containerization, and system programming skills.
•	Project Topic: Student Information System Running on Docker Containers
o	System Architecture:
1.	Database Container: PostgreSQL database
2.	Application Container: C++ application that saves student information to the database
3.	GitHub Project Management: Teamwork and version control
o	Basic Functions:
1.	Save student information (ID, name, surname, department, email)
2.	List student information
3.	Update student information
4.	Delete student information
5.	Database connection and transaction management 
IMPORTANT DATES
Event	Date	Description
Project Start	12/12/2025	Team formation and project start
Week 1 Check-in	19/12/2025	First week activity report submission
Week 2 Check-in	26/12/2025	Docker containers ready
Week 3 Check-in	02/01/2026	C++ application basic functions ready
Final Submission	09/01/2026	All project materials submission
Presentation Day	14-16/01/2026	Project presentations and demos

IMPORTANT RULES AND WARNINGS!!!
•	GitHub Rules:
1.	Email Requirement: All students must create GitHub account with official school email.
2.	Commit Messages: Use meaningful commit messages. Example format:
text
feat: add student insert functionality
- Implement insert_student() function
- Add input validation for email field
- Update database schema to version 1.2
Closes #45
3.	Pull Request Process: All changes must be made via Pull Request, requiring at least 1 review.
4.	Direct Push Prohibition: Direct push to main and develop branches is prohibited.
5.	Regular Contribution: Last-minute commits will receive lower points.
•	Docker Hub Rules:
1.	Account Creation: Each student creates Docker Hub account with school email.
2.	Image Ownership: Each student takes responsibility for their assigned images.
3.	Public Access: Images must be publicly accessible for evaluation.
4.	Documentation: Docker Hub links must be included in README.md.
•	Teamwork Rules:
1.	Active Participation: All students must actively contribute to the project.
2.	Weekly Meetings: Hold at least one meeting per week, notes added to GitHub Wiki.
3.	Task Distribution: Tasks must be tracked and updated via GitHub Projects.
4.	Communication: All technical discussions must be conducted via GitHub Issues.
•	Academic Integrity:
1.	Plagiarism Prohibition: Copying code from other projects is strictly prohibited.
2.	Individual Work: Each student must complete their own tasks individually.
3.	Reference Citation: External sources must be properly cited.
Disqualifying Situations:
1.	Not using school email in the Github, DockerHub
2.	No GitHub activity
3.	Using copied code from other projects
4.	Missing submission deadline
Success Indicators:
•	Technical Success: System works without errors
•	Teamwork: Regular GitHub activity and collaboration
•	Time Management: Achieving weekly goals
•	Documentation: Complete and quality documentation

 
Team Roles and Detailed Task Distribution
Student 1: Project Manager (Team Leader)
GitHub Username: [Created with School Email]
Responsibilities:
1.	GitHub Repository Management:
•	Create repository and add team members
•	Branch strategy: main, develop, feature/*
•	Create and manage GitHub Projects board
•	Create milestones and issues
2.	Weekly Reporting:
•	Weekly activity report by Monday 23:59 (to GitHub Wiki)
•	Team member contribution analysis
•	Project progress status
3.	Code Review Management:
•	Review all Pull Requests
•	Create review templates
•	Resolve merge conflicts
4.	Documentation:
•	README.md (main page)
•	MANUAL.md (user manual)
•	INSTALL.md (installation documentation)
•	CONTRIBUTING.md (contribution guide)
5.	Communication and Coordination:
•	Weekly meeting notes (GitHub Wiki)
•	Decision log
Minimum GitHub Activity:
•	20+ meaningful commits
•	10+ opened issues
•	8+ Pull Requests
•	15+ Code Reviews
•	15+ Wiki edits
•	25+ Project board updates
 
Student 2: Docker and DevOps Engineer
GitHub Username: [Created with School Email]
Responsibilities:
1.	Docker Infrastructure:
•	Dockerfile (for C++ application)
•	docker-compose.yml (all services)
•	Dockerfile.db (for PostgreSQL if needed)
•	.dockerignore file
2.	GitHub Actions CI/CD:
•	.github/workflows/ci.yml (Continuous Integration)
•	.github/workflows/docker-build.yml
•	Test automation
•	Build pipeline
3.	Container Orchestration:
•	Volume management
•	Network configuration
•	Environment variables management
•	Health check implementation
4.	Performance and Monitoring:
•	Container resource limits
•	Log management
•	Docker Hub/GitHub Packages integration
5.	Docker Hub Requirement (MANDATORY):
•	Create Docker Hub account with school email
•	Push PostgreSQL container image to Docker Hub
•	Push C++ application container image to Docker Hub
•	Images must be publicly accessible
•	Include Docker Hub links in README.md
Minimum GitHub Activity:
•	15+ meaningful commits
•	8+ opened issues
•	10+ Pull Requests (Docker/CI/CD related)
•	10+ Code Reviews
•	5+ Wiki edits
•	15+ Project board updates
 
Student 3: C++ Developer
GitHub Username: [Created with School Email]
Responsibilities:
•	C++ Application Development:
•	src/ directory structure and organization
•	Create CMakeLists.txt or Makefile
•	Database connection layer (libpqxx)
•	CRUD operations implementation
•	Code Structure and Quality:
•	include/ - Header files
•	src/ - Source files
•	tests/ - Unit tests
•	Code formatting (clang-format)
•	Memory leak checking
•	Database Operations:
•	PostgreSQL connection
•	Transaction management
•	Error handling and exception handling
•	Input validation
•	Test Development:
•	Unit tests
•	Integration tests
•	Test coverage report
•	Docker Hub Requirement (MANDATORY):
•	Collaborate with Student 2 on Docker image creation
•	Test application Docker image locally
•	Verify Docker image functionality
•	Update documentation with Docker Hub information
Minimum GitHub Activity:
•	20+ meaningful commits
•	8+ opened issues
•	12+ Pull Requests (C++ related)
•	10+ Code Reviews
•	5+ Wiki edits
•	15+ Project board updates
 
4-Week Project Schedule
•	Week 1: Project Start and Planning (Start Date: [Date])
a.	Entire Team:
i.	Create GitHub organization/repository (with school email)
ii.	Development environment setup (Ubuntu, Docker, C++ compiler)
iii.	Create project plan (GitHub Projects)
b.	Individual Tasks:
i.	Student 1: Repository setup, add team, initial documentation
ii.	Student 2: Docker requirements documentation, CI pipeline research, Docker Hub account creation
iii.	Student 3: Project structure planning, C++ dependencies research
c.	GitHub Activity Expectation (Week 1):
i.	Each student: 3+ commits, 2+ Issues, 1+ Pull Request
ii.	All communication through GitHub
•	Week 2: Docker Container Creation (Week 2 Start: [Date])
a.	Technical Goals:
i.	PostgreSQL Docker container configuration
ii.	C++ application Dockerfile creation
iii.	Inter-container network communication
iv.	Docker Compose file
v.	Docker Hub: Push initial images to Docker Hub
b.	GitHub Activity Expectation (Week 2):
i.	Each student: 4+ commits
ii.	Student 2: 3+ Docker-related Pull Requests, Docker Hub images pushed
iii.	All students: 2+ code reviews
iv.	Regular project board updates
•	Week 3: C++ Application Development (Week 3 Start: [Date])
a.	Technical Goals:
i.	Database connection setup (libpqxx)
ii.	CRUD operations implementation
iii.	Error handling and logging
iv.	Unit test writing
v.	Docker Hub: Update application image on Docker Hub
b.	GitHub Activity Expectation (Week 3):
i.	Each student: 5+ commits
ii.	Student 3: 4+ feature Pull Requests
iii.	All students: 3+ code reviews
iv.	Commit test results
•	Week 4: Testing, Documentation, and Presentation (Week 4 Start: [Date])
a.	Technical Goals:
i.	Integrated system testing
ii.	Full deployment with Docker Compose
iii.	Performance testing
iv.	Final documentation
v.	Docker Hub: Final images tagged and pushed
b.	GitHub Activity Expectation (Week 4):
i.	Each student: 3+ commits
ii.	Final Pull Requests and reviews
iii.	Wiki completion
iv.	Create release tag
v.	Update Docker Hub with final images

Technical Requirements
1.	Docker Containers:
•	Container 1: PostgreSQL (official image: postgres:latest)
•	Container 2: C++ application (custom Dockerfile)
•	Docker Compose: docker-compose.yml to run both containers
•	Volume: Use volume for database data persistence
•	Network: Private network between containers
•	Docker Hub: All images must be pushed to Docker Hub with school email accounts
2.	C++ Application:
•	Compilation: Use CMake or Makefile
•	Database: PostgreSQL connection with libpqxx library
•	Interface: Command line interface (CLI)
•	Error Handling: Exception handling and logging
•	Code Standard: Modern C++ (C++11 or higher)
3. GitHub Management:
•	Required Files: README.md, LICENSE, .gitignore
•	Branch Strategy: Git Flow-like strategy
•	Code Review: All changes via PR and merge after review
•	Project Management: Task tracking with GitHub Projects
•	CI/CD: Automatic testing and build with GitHub Actions
4. Docker Hub Requirements:
•	Account Creation: Each student creates Docker Hub account with school email
•	Image Naming Convention: [school-username]/[project-name]-[component]
•	Example: itu20240001/sis-project-postgres
•	Example: itu20240002/sis-project-app
•	Tags: Use semantic versioning tags (v1.0, latest)
•	Documentation: Include Docker Hub links in README.md
•	Accessibility: Images must be publicly accessible
 
EVALUATION CRITERIA
1. GITHUB ACTIVITY AND CODE DEVELOPMENT (70 POINTS)
Individual Evaluation per Student (50 Points):
Criteria	Points	Evaluation Method	Minimum Expectation
Commit Quality and Quantity	15	GitHub Insights / git log	15+ meaningful commits
Pull Request Management	15	GitHub PR list	5+ PRs (detailed description)
Code Review Participation	10	GitHub Review list	10+ constructive reviews
Issue Management	10	GitHub Issues list	5+ opened issues
Documentation Contribution	10	GitHub Wiki / Docs folder	Wiki/README edits
Technical Success Criteria (Team - 20 Points):
Technical Criterion	Points	Success Indicator
Docker Containers	5	Two containers working, docker-compose working
C++ Program	5	CRUD operations working, stable database connection
Code Quality	5	No memory leaks, proper code format, comments exist
CI/CD Pipeline	5	GitHub Actions working, automated tests successful
Docker Hub Images	5	Images pushed to Docker Hub, accessible with school email
2. PROJECT PRESENTATION AND DEMO (10 minutes - 30 POINTS)
Presentation Evaluation Criteria:
Criteria	Points	Evaluation Method
Presentation Content and Structure	8	Clear presentation flow, time management (10 min), visual quality
Technical Demo Quality	10	Live system operation, Docker container demonstration, CRUD demo
Q&A Performance	7	Ability to answer technical questions, explain system details
Team Coordination	5	Presentation of task distribution, explanation of collaboration process
 
Submission Format and Requirements
1. GitHub Repository: (Main Submission Tool)
•	Repository URL: [GitHub Repository Link] (Sent to teacher via email)
•	Required Branches: main, develop
•	Required Files:
o	README.md (Detailed project description)
o	MANUAL.md (User manual)
o	INSTALL.md (Installation documentation)
o	docker-compose.yml
o	Dockerfile
o	CMakeLists.txt or Makefile
o	.github/workflows/ci.yml
2. Docker Images on Docker Hub: (MANDATORY FOR ALL STUDENTS)
•	Individual Requirement: Each student must create Docker Hub account with school email
•	Image Requirements:
o	PostgreSQL container image pushed by Student 2
o	C++ application container image pushed by Student 2
o	Images must be publicly accessible
o	Include Docker Hub links in README.md
•	Image Naming Convention:
text
Format: [school-username]/[project-name]-[component]:[tag]
Example: itu20240001/sis-project-postgres:v1.0
Example: itu20240002/sis-project-app:latest
3. Presentation Materials:
o	Presentation Slides: PDF or PowerPoint format
o	Demo Script: List of steps to be performed during demo
o	Q&A Preparation: Expected questions and answers
 
 (Before Final Submission)
•	Technical Checks:
o	Docker containers working
o	C++ application performing CRUD operations
o	Database connection stable
o	GitHub Actions successful
o	No memory leaks in code
o	Docker images pushed to Docker Hub (all students)
o	Docker Hub images publicly accessible
•	Documentation Checks:
o	README.md complete
o	MANUAL.md user manual ready
o	INSTALL.md installation documentation ready
o	All code sufficiently commented
o	Docker Hub links included in documentation
•	GitHub Checks:
o	All students have commits
o	PRs reviewed and merged
o	Issues closed
o	Project board updated
o	Wiki documentation completed
•	Presentation Preparation:
o	Presentation slides ready
o	Demo script ready
o	All team members prepared for presentation
o	Q&A preparation done
