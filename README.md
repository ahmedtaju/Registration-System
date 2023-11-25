This C++ program manages student registration information using a linked list data structure. The program provides two distinct menus for students and teachers, each with specific functionalities.

Student Features:
Registration:

Students can register with a unique username and provide details such as password, first name, last name, age, sex, country, and phone number.
The program checks for duplicate usernames to ensure uniqueness.
View Details:

Students can view their registration details by entering their username.
Modify Details:

Students can modify their registration details, including password, first name, last name, age, sex, country, and phone number.
Teacher Features:
Display All Students:

Teachers can view a list of all registered students along with their details, including username, first name, last name, age, sex, country, and phone number.
Delete Student:

Teachers can delete a student from the registered list by entering the student's username.
File Management:
The program loads existing student data from a CSV file at the start and saves any updates to the data back to the file upon program exit.
The CSV file stores student information, including username, password, first name, last name, age, sex, country, and phone number.
Implementation Details:
The student data is stored in a linked list (list<Student>) instead of a vector.
The program uses a modular approach with functions for each menu option, improving readability and maintainability.
Appropriate error handling is implemented to address scenarios such as duplicate usernames, invalid menu choices, and non-existent students during deletion or modification.
Usage:
Compile the program using a C++ compiler.
Run the compiled executable.
Choose to log in as a student or teacher.
Perform the desired actions based on the selected role.
This program provides a flexible and extensible foundation for managing student registration information with a focus on code modularity and user-friendly interactions
