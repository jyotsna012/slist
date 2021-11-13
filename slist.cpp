#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

struct student{

  char fname[100];
  char lname[100];
  int sID;
  float gpa;

};

int main(){

  cout << "Welcome to the Student List." << endl;

  //while(0){

    cout << "What would you like to do?" << endl;
    cout << "You can ADD, PRINT, DELETE, or QUIT" << endl;
    cout << "ADD -> Creates a new entry for student" << endl;
    cout << "PRINT -> Prints the current students stored" << endl;
    cout << "DELETE -> Deletes entry based on student ID" << endl;
    cout << "QUIT -> Exits the program" << endl;
    cout << "Enter the action you would like to do by entering the coressponding letter." << endl;
    cout << "ADD = 0" << endl;
    cout << "PRINT = 1" << endl;
    cout << "DELETE = 2" << endl;
    cout << "QUIT = 3" << endl;

    int choice;
    cin >> choice;

    if(choice == 0){
      cout << choice << endl;
    }
    if(choice == 1){
      cout << choice << endl;
    }
    if(choice == 2){
      cout << choice << endl;
    }
    if(choice == 3){
     // break;
    }

  //}

}


