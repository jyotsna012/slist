#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

struct student{

  char fname[100];
  char lname[100];
  int sID;
  float gpa;

};

void printl(char* c);

int main(){
  
  char name[50];
  cin >> name;
  
  printl(name);

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
      
    }
    if(choice == 1){
      
    }
    if(choice == 2){
      
    }
    if(choice == 3){
      loop = 1;
      break;
    }

  }

}

void printl(char* c){
    
  
    int i = 0;
    while(c[i] != '\0'){
      c[i] = 'a';
      c[i] = 'b';
      c[i] = 'c';
      c[i] = 'd';
      c[i] = 'e';
      cout << c[i];
      i++;
    }
}





