#include <iostream>
using namespace std;


int main() {
  int n;
  cin>>n;
  for(int row=0;row<n;row+=1){
   
      for (int col=0;col<(n-row);col+=1){
      cout<<"*";}
    
    for (int col=0;col<(2*row)+1;col+=1){
        cout<<" ";
          
     
      
      }
   for (int col=0;col<(n-row);col+=1){
      cout<<"*";
    }
    cout<<endl;
  }
  
// inverted
  for(int row=0;row<n;row+=1){
    for (int col=0;col<(row)+1;col+=1){
      cout<<"*";
      
    }
    for (int col=0;col<(2*n)-2*row-1;col+=1){
      cout<<" ";
     
    }
     for (int col=0;col<(row)+1;col+=1){
      cout<<"*";}
    cout<<endl;
  }
}