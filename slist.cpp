#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

struct student{
  char studentFirstName[25];
  char studentLastName[25];
  int  studentId;
  float studentGPA;
};
vector<student*> students;


void add(vector<student*> vect){

  student* newStudent = new student; 
  char studentFirstName[25];
  char studentLastName[25];
  int  studentId;
  float studentGPA;
  cout << "What is the first name of the student" << endl;
  cin >> newStudent->studentFirstName;
  cout << "What is the last name of the student" << endl;
  cin >> newStudent->lastName;
  cout << "What is the Student ID" << endl;
  cin >> newStudent->studentId;
  cout << "What is the students GPA" << endl;
  cin >> newStudent->studentGPA;
  
  //cout<<studentLastName<<endl;
  
  
  /*strcpy(newStudent->studentFirstName=studentFirstName);
  strcpy(newStudent->studentLastName=studentLastName);
  jake->studentId=studentId;
  jake->studentGPA=studentGPA;*/

  cout<<"First Name: "<<(newStudent->studentFirstName)<<endl;
  cout<<"Last Name: "<<(newStudent->studentLastName)<<endl;   
  cout<<"ID: "<<(newStudent->studentId)<<endl;   
  cout<<"GPA: "<<(newStudent->studentGPA)<<endl;   
  vect.push_back(newStudent);
  
}

int main(){

 cout << "Welcome to the Student List." << endl;
 cout << "You can ADD, PRINT, DELETE, or QUIT" << endl;
 cout << "ADD -> Creates a new entry for student" << endl;
 cout << "PRINT -> Prints the current students stored" << endl;
 cout << "DELETE -> Deletes entry based on student ID" << endl;
 cout << "QUIT -> Exits the program" << endl;
 int loop = 0;
 while(loop == 0){
  cout << "What would you like to do?" << endl;
  cout << "Enter the action you would like to do by entering the coressponding letter." << endl;
  cout << "ADD = 0" << endl;
  cout << "PRINT = 1" << endl;
  cout << "DELETE = 2" << endl;
  cout << "QUIT = 3" << endl;
  int choice;
  cin >> choice;
  if(choice == 0){
    add(students);
  }
  if(choice == 1){  
     //for(vector<student*>::iterator it = students.begin(); it != students.end(); it++){
        // cout << (*it)->studentId << endl;
     //}
  }
  if(choice == 2){  
  }
  if(choice == 3){
    loop = 1;
    break;
  }
  }
  
}
  
