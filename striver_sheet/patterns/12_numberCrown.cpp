
// https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
void numberCrown(int n) {
    // Write your code here.

     for (int row=0;row<n;row++){
         //numbers
         for(int col=0;col<row+1;col++){
             cout<<col+1<<" ";
         }

         //spaces
         for(int col=0;col<2*(n-row)-2;col++){
             cout<<"  ";
         }

         //inverted numbers

         for(int col=row+1;col>0;col--){
             cout<<col<<" ";
             
         }
         cout<<endl;
     }
}
