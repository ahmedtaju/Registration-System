

# Student Management System

A simple console-based Student Management System written in C++. This project allows students to register, view, and modify their details, and enables teachers to view all students and delete student records. The data is saved to a CSV file for persistence.

## Features

### Student Features:
1. **Register a New Student**:
   - Students can register by providing their details (e.g., username, password, name, age, etc.).
   - Ensures that duplicate usernames are not allowed.

2. **View Student Details**:
   - Students can view their own details by entering their username.

3. **Modify Student Details**:
   - Students can update their information (e.g., password, name, phone number, etc.).

### Teacher Features:
1. **Display All Students**:
   - Teachers can view the details of all registered students.

2. **Delete a Student**:
   - Teachers can remove a student record by entering the student's username.

### Data Persistence:
- Student data is stored in a CSV file (`students.csv`) for persistent storage.

## Project Structure

- **`main()`**: Entry point of the application that provides the option to log in as a student or teacher.
- **Student Operations**: Includes functions for registering, viewing, modifying, and deleting student details.
- **File Handling**: Ensures data is saved and loaded from a CSV file.

## Prerequisites

- **C++ Compiler**: Any C++ compiler that supports the C++11 standard or later.
- **Standard Template Library (STL)**: Used for data structures and algorithms.

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/student-management-system.git
   cd student-management-system
   ```

2. **Compile the Code**:
   Use a C++ compiler like `g++`:
   ```bash
   g++ -o student_management main.cpp
   ```

3. **Run the Program**:
   ```bash
   ./student_management
   ```

4. **Follow the On-Screen Menu**:
   - Log in as a **Student** to register or manage your details.
   - Log in as a **Teacher** to view or manage student records.

## Sample CSV File

The data is stored in `students.csv` in the following format:
```
username,password
student1,password123
student2,password456
```

## Future Improvements

1. **Enhanced Security**:
   - Encrypt passwords before storing them in the CSV file.
   
2. **Error Handling**:
   - Handle file I/O errors more gracefully.

3. **UI Improvements**:
   - Replace the console interface with a GUI or web-based frontend.

4. **Additional Features**:
   - Add a search functionality for teachers to find students easily.
   - Include grades or other academic information in student profiles.

## Contributing

Contributions are welcome! Feel free to fork this repository, make changes, and submit a pull request.


---

### Author

- **Ahmmad Taju**  
  [ahmedtaju](https://github.com/ahmedtaju)
