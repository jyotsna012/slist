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


void add(vector<student*> &vect){

  student* newStudent = new student; 
  char studentFirstName[25];
  char studentLastName[25];
  int  studentId;
  float studentGPA;
  cout << "What is the first name of the student" << endl;
  cin >> newStudent->studentFirstName;
  cout << "What is the last name of the student" << endl;
  cin >> newStudent->studentLastName;
  cout << "What is the Student ID" << endl;
  cin >> newStudent->studentId;
  cout << "What is the students GPA" << endl;
  cin >> newStudent->studentGPA;
  vect.push_back(newStudent);
}

void print(vector<student*> &vect){
  
    for(vector<student*>::iterator it = students.begin(); it != students.end(); it++){
         cout<<"First Name: "<<(*it)->studentFirstName << endl;
         cout<<"Last Name: "<<(*it)->studentLastName << endl;
         cout<<"ID: "<<(*it)->studentId << endl;  
         cout<<"GPA: "<<(*it)->studentGPA << endl;
     }

}

void sdelete(vector<student*> &vect){
  
  int studentId;
  int position;
  cout << "enter the student ID of the student to be removed" << endl;
  cin >> studentId;
  
  for(vector<student*>::iterator it = students.begin(); it != students.end(); it++){
  
    position++;
   if((*it)->studentId == studentId){
     cout<< "pos" << position<<endl;
     break;
   
   }
    
  
  }
  
  vect.erase(position-1);
  
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
    print(students);
  }
  if(choice == 2){  
    sdelete(students);
  }
  if(choice == 3){
    loop = 1;
    break;
  }
  }
  
}
  
