#include <iostream>
using namespace std;


int main() {
  int n;
  cin>>n;
  for(int row=0;row<n;row+=1){
    for (int col=0;col<(n-row-1);col+=1){
      cout<<" ";
      
    }
    for (int col=0;col<(2*row)+1;col+=1){
      if (col==0|| col ==(2*row)){
        cout<<"*";
          
      }
      else {
        cout<<" ";
      }
    }
    cout<<endl;
  }

// inverted
  for(int row=0;row<n;row+=1){
    for (int col=0;col<(row);col+=1){
      cout<<" ";
      
    }
    for (int col=0;col<(2*n)-2*row-1;col+=1){
      if ( col==0|| (col ==(2*n)-2*row-1-1)){
        cout<<"*";
          
      }
      else {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}