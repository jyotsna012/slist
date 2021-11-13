#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

struct student{
  int sID;
};
  
vector<student> students;

int main(){

 struct student jake;
 jake.sID=8;
 cout<<"ID: "<<(jake.sID)<<endl;   
 students.push_back(jake);
 
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
     for(vector<student>::iterator it = students.begin(); it != students.end(); it++){
         cout << it->sID << endl;
     }
  }
  if(choice == 2){  
  }
  if(choice == 3){
    loop = 1;
    break;
  }
  }
  
}
  
