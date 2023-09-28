#include<iostream>
using namespace std;
int main(){
  int num;
  cin>>num;
//top part
  for(int row=0;row<num;row++){
    for(int col=0;col<num-row;col++){
      cout<<"*";
    }
    for(int col=0;col<2*row+1;col++){
      cout<<" ";
    }
    for (int col=0;col<num-row;col++){
      cout<<"*";
    }
    cout<<endl;
  }
  //Bottom part
  for(int row=0;row<num;row++){
    for(int col=0;col<row+1;col++){
      cout<<"*";
    }
    for(int col=0;col<2*num-2*row-1;col++){
      cout<<" ";
    }
    for (int col=0;col<1+row;col++){
      cout<<"*";
    }
    cout<<endl;
  }
}
