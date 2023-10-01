//week 2 lecture 3 functions 
#include<iostream>
using namespace std;

int findMax(int num1,int num2,int num3){
if(num1>num2&&num1>3) return num1;
else if(num2>num1&&num2>num3) return num2;
else{return num3;}
}


int main(){
  int a;
  int b;
  int c;
  cout<<"enter the value of a ";
  cin>>a;
  cout<<"enter the value of b ";
  cin>>b;
  cout<<"enter the value of c ";
  cin>>c;
int max= findMax(a,b,c);
  cout<<"Max number is " << max<<endl;
  return 0;
  }
 

