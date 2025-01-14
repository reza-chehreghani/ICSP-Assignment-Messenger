# ICSP Assignment Messenger

This repository contains a command-line messenger application written in C, developed as part of the **Introduction to Computing Systems and Programming (ICSP)** course at the University of Tehran. The application allows users to register, log in, create posts, like posts, and search for other users in a simple and interactive command-line interface. This project demonstrates fundamental programming concepts and data handling techniques, making it an educational assignment to enhance programming skills.

## Features

### 1. User Registration and Authentication
- New users can create accounts with a username and password.
- Existing users can log in with their credentials.
- Basic input validation ensures correct and secure data handling.

### 2. Post Creation
- Authenticated users can create posts with custom content.
- Each post is linked to the user who created it.

### 3. Like Functionality
- Users can like posts created by others.
- The like count is updated and displayed for each post.

### 4. User Search
- Users can search for other accounts by entering a username.
- Displays basic information about the searched user.

### 5. User Information
- Provides details about logged-in users and their activity (e.g., posts, likes).

### 6. Input and Data Management
- Efficient handling of user input and storage ensures smooth interaction.
- Data structures are utilized for organizing users, posts, and interactions.

---

## File Structure

This project is organized into several modular files, each responsible for specific functionalities:

- **`main.c`**: Contains the main function and controls the program's primary flow.
- **`signup.c`**: Manages user registration, ensuring valid inputs and data storage.
- **`login.c`**: Handles user authentication and session management.
- **`new_post.c`**: Implements the functionality for users to create new posts.
- **`like.c`**: Contains logic for liking posts and updating the like counter.
- **`find_user.c`**: Facilitates searching for other users by username.
- **`info.c`**: Displays information about the logged-in user or searched users.
- **`input.c`**: Handles user input operations for smoother interaction.
- **`scan_list.c`**: Manages scanning and displaying lists of users or posts.
- **`delete.c`**: Handles deletion of user accounts or posts.
- **`functions.h`** and **`main.h`**: Header files containing function declarations and shared includes.
