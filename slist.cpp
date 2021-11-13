#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

struct student{
  int sID;
};
  

int main(){

struct student new;
new.sID=8;
cout<<"ID: "<<(new.ID)<<endl;    

}

/*void printl(char* c);


//student jake;
//student *ptr_student;
//ptr_student = &jake;


void add(vector<student> &vect){
  student new;
  new.sID = 123;
  vect.push_back(new);
  for(auto & elem : students)
    {
        cout<<elem<<", ";
    }
}


int main(){
  
  struct student{
    
    //char fname[100];
    //char lname[100];
    int sID;
    //float gpa;

  };
  
  vector<student> students;
  
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
       add(student);
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
      c[i] = 'a';
      cout << c[i];
      i++;
      c[i] = 'b';
       cout << c[i];
      i++;
      c[i] = 'c';
       cout << c[i];
      i++;
      c[i] = 'd';
      cout << c[i];
      i++;
      c[i] = 'e';
      cout << c[i];
      i++;
}*/





