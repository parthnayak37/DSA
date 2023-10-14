//week 3 lecture 1 linear search usin bool
#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int number){
  for(int i=0;i<size;i++){
    if(arr[i]==number){
      return true;
    }   
  }
  return false;
  }
int main(){
 int arr[5];
  int size;
  int number;
  cout<<"Enter size of Array"<<endl;
  cin>>size;
  cout<<"Enter the elements"<<endl;
  for (int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"Enter number to search"<<endl;
  cin>>number;

  if(linearSearch(arr,size,number))
  {
    cout<<"Element is present"<<endl;
  }
  
  else{
    cout<<"Element is absent"<<endl;
    }

  
  return 0;
}
