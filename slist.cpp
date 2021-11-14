//Student List - Can add Add students to storage, Delete from storage, and Print students in storage 
//Jyotsna Tera
//November 2021

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

//creates struct to store student data
struct student{
  char studentFirstName[25];
  char studentLastName[25];
  int  studentId;
  float studentGPA;
};

//creates vector to store all the student's data
vector<student*> students;

//add funtion will ask user for student data and will add to vector
void add(vector<student*> &vect){

  //creates student profile
  student* newStudent = new student; 
  //initializes variables
  char studentFirstName[25];
  char studentLastName[25];
  int  studentId;
  float studentGPA;
  
  //asks for first name
  cout << "What is the first name of the student" << endl;
  //assigns what the user enters to the studentFirstName position in struct
  cin >> newStudent->studentFirstName;
  cout << "What is the last name of the student" << endl;
  //assigns what the user enters to the studentLastName position in struct
  cin >> newStudent->studentLastName;
  cout << "What is the Student ID" << endl;
  //assigns what the user enters to the studentId position in struct
  cin >> newStudent->studentId;
  cout << "What is the students GPA" << endl;
  //assigns what the use enter to variable student GPA
  cin >> studentGPA;
  //rounds GPA to inly 2 digits
  float value = (int)(studentGPA * 100 + .5);
  float newGPA = (float)value / 100;
  //assigns what the user enters to the studentGPA position in struct
  newStudent->studentGPA = newGPA;
  //adds struct to vector
  vect.push_back(newStudent);
}

//will print whats in the vector
void print(vector<student*> &vect){
  
    //iterates through vector
    for(vector<student*>::iterator it = students.begin(); it != students.end(); it++){
          //prints of each component of struct
         cout<<"First Name: "<<(*it)->studentFirstName << endl;
         cout<<"Last Name: "<<(*it)->studentLastName << endl;
         cout<<"ID: "<<(*it)->studentId << endl;  
         cout<<"GPA: "<<(*it)->studentGPA << endl;
     }

}

//deletes student based on ID
void sdelete(vector<student*> &vect){
  
  int studentId;
  //asks for student ID
  cout << "enter the student ID of the student to be removed" << endl;
  cin >> studentId;
  
  //iterates through vector until entered studentID matches one in the student data
  for(vector<student*>::iterator it = students.begin(); it != students.end(); it++){
  
    //if studentid matches something in dataset
    if((*it)->studentId == studentId){
     //erases the struct with the matching student ID
     vect.erase(it,vect.end());
     break;
   }
  }
}

int main(){

 cout << "Welcome to the Student List." << endl;
 cout << "You can ADD, PRINT, DELETE, or QUIT" << endl;
 cout << "ADD -> Creates a new entry for student" << endl;
 cout << "PRINT -> Prints the current students stored" << endl;
 cout << "DELETE -> Deletes entry based on student ID" << endl;
 cout << "QUIT -> Exits the program" << endl;
 int loop = 0;
 //program keeps running until user quits
 while(loop == 0){
  cout << "What would you like to do?" << endl;
  cout << "Enter the action you would like to do by entering the coressponding letter." << endl;
  cout << "ADD = 0" << endl;
  cout << "PRINT = 1" << endl;
  cout << "DELETE = 2" << endl;
  cout << "QUIT = 3" << endl;
  int choice;
  cin >> choice;
   //add students
  if(choice == 0){
    add(students);
  }
   //prints vector
  if(choice == 1){  
    print(students);
  }
   //delete student
  if(choice == 2){  
    sdelete(students);
  }
   //quits program
  if(choice == 3){
    loop = 1;
    break;
  }
  }
  
}
  
