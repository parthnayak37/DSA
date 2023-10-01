// Week 2 lecture 3 funciton to count from 1 to n
#include<iostream>
using namespace std;

void printCount(int num){
  for(int count=1;count<=num;count++){
    cout<<count<<" ";
  }
}

int main(){
  int num;
  cout<<"enter the value of num ";
  cin>>num;
  printCount(num);
  return 0;

  }
 

