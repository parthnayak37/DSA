//week 2 pattern class 
#include <iostream>
using namespace std;

int main() {
  int num;
  cin>>num;
  for (int row=0;row<num;row++){
    //spaces
    for(int space=0;space<num-row-1;space++){
      cout<<" ";
    }
    for (int col=0;col<2*row+1;col++){
      //ternary operator instead of if-else 
      string star=(col==0||col==2*row)?"*":" ";
      cout<<star;
    }
    cout<<endl;
  }

//bottom part
for (int row=0;row<num;row++){
    //spaces
    for(int space=0;space<row;space++){
      cout<<" ";
    }
    for (int col=0;col<2*num-(2*row+1);col++){
      //ternary operator instead of if-else 
      string star=(col==0||col==2*num-(2*row+2))?"*":" ";
      cout<<star;
    }
    cout<<endl;
  }
  
}
