//week 2 lecture 3 funciton of students and grade problem
#include<iostream>
using namespace std;
char getGrade(int marks){
  switch(marks/10){
    case 10: return'A';
    case 9: return 'B';
    case 8: return 'C';
    case 7: return 'D';
    default: return 'E';
    
  }
}

int main(){
  int marks;
  cout<<"enter the marks ";
  cin>>marks;
 char grade=getGrade(marks);
  cout<<"grade is "<<grade;
  return 0;

  }
 

