#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

struct Student{
string username;
string password;
string firstName;
string lastName;
int age;
string sex;
string phoneNumber;
};
vector<Student> students;
//Function prototypes
void displayStudentMenu();
void displayTeacherMenu();
void registerStudent();
void displayStudentDetails(const string& username);
void modifyStudentDetails(const string& username);
void displayAllStudents();
void deleteStudent();
void saveDataToFile();
int main(){
//Load existing student data from CSV file
//Implement  code to read from file and populate'students'vector
int userType;
do {
cout<<"\t\t\t\t\tLog in as:\n\n\t\t\t\t\t\t1.Student\n\t\t\t\t\t\t2.Teacher\n\t\t\t\t\t\t3.Exit\n";
cin>>userType;
switch(userType){
case 1:
    displayStudentMenu();
    break;
case 2:
    displayTeacherMenu();
    break;
case 3 :
    cout<<"Exiting program...\n";
    break;
default:
        cout<<"Invalid choice.Please try again.\n";
        break;
}
}while(userType!=3);
//Save updated student data to CSVfile
saveDataToFile();
return 0;
}
void displayStudentMenu(){
int choice;
string username;
cout<<"Student Menu:\n1.Register\n2.View Details\n3.Modify Details\n4.Exit\n";
cin>>choice;
switch(choice){
case 1:
registerStudent();
break;
case 2:
cout<<"Enter your Id_no.:";
cin>>username;
displayStudentDetails(username);
break;
case 3:
cout<<"Enter your Id_no.:";
cin>>username;
modifyStudentDetails(username);
break;
case 4:
cout<<"Exiting student  menu...\n";
break;
default:
cout<<"Invalid choice.Please try again.\n";
}
}
void displayTeacherMenu(){
int choice;
cout<<"Teacher Menu:\n1.Display All Students\n2.Delete Student\n3.Exit\n";
cin>>choice;
switch(choice){
case 1:
displayAllStudents();
break;
case 2:
deleteStudent();
break;
case 3:
cout<<"Exiting teacher menu...\n";
break;
default:
cout<<"Invalid choice.Please try again.\n";
}
}
void registerStudent(){
Student newStudent;
cout<<"Enter Id_no.:";
cin>>newStudent.username;
//Check if Id_no. already exists
for(const auto&student:students){
if(student.username==newStudent.username){
cout<<"you are already exists.Registration failed.\n";
return;
}
}
cout<<"Enter password:";
cin>>newStudent.password;

cout<<"Enter firstName:";
cin>>newStudent.firstName;

cout<<"Enter your father name:";
cin>>newStudent.lastName;

cout<<"Enter your age:";
cin>>newStudent.age;

cout<<"Enter sex:";
cin>>newStudent.sex;

cout<<"Enter phone number: ";
cin>>newStudent.phoneNumber;

//Add the new student to the vector
students.push_back(newStudent);
cout<<"Registration successful!\n";
}
void displayStudentDetails(const string&username){
//Implement code to display student details
for(const auto&student:students){
if(student.username==username){
//Display student details
cout<<"StudentDetails:\n";
cout<<"Id_no.: "<<student.username<<"\n";
cout<<"Password: "<<student.password<<"\n";
cout<<"First Name : "<<student.firstName<<"\n";
cout<<"Father Name: "<<student.lastName<<"\n";
cout<<"Age: "<<student.age<<"\n";
cout<<"Sex: "<<student.sex<<"\n";
cout<<"Phone Number: "<<student.phoneNumber<<"\n";

return;
}
}
cout<<"Student not found.\n";
}
void modifyStudentDetails(const string&username){
//Implement code to modify student details
for(auto&student:students){
if(student.username==username){
//Modify student details
cout<<"Enter new password:";
cin>>student.password;

cout<<"Enter new first name:";
cin>>student.firstName;

cout<<"Enter new last name:";
cin>>student.lastName;

cout<<"Enter new age:";
cin>>student.age;

cout<<"Enter new sex:";
cin>>student.sex;

cout<<"Enter new phone number:";
cin>>student.phoneNumber;

cout<<"Details updated!\n";
return;
}
}
cout<<"Student not found.\n";
}
void displayAllStudents(){
//Implement code to display all registered students
if(students.empty()){
cout<<"No students registered yet.\n";
return;
}
cout<<"All Registered Students:\n";
for(const auto&student:students){
cout<<"Id_no.:"<<student.username<<"\n";
cout<<"Name:"<<student.firstName<<" "<<student.lastName<<"\n";
cout<<"Age:"<<student.age<<"\n";
cout<<"Sex:"<<student.sex<<"\n";
cout<<"Phone Number:"<<student.phoneNumber<<"\n";
cout<<"------------------------\n";
}
}
void deleteStudent(){
//Implement code to delete a student from the registered list
string username;
cout<<"Enter the user name to delete:";
cin>>username;
auto it = find_if(students.begin(),students.end(),[username](const Student& student){
return student.username==username;
});
if(it!=students.end()){
students.erase(it);
cout<<"Student deleted!\n";
}else{
cout<<"Student not found.\n";
}
}
void saveDataToFile(){
//Implement code to save data to a CSV file
ofstream file("students.csv");
if(file.is_open()){
for(const auto&student:students){
file<<student.username<<","<<student.password<<"\n";
//Save other details as needed
}
file.close();
}else{
cout<<"Error saving data to file.\n";
}
}
