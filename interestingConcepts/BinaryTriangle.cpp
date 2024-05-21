//used ternary operator instead of basic if else  
//link --> https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nBinaryTriangle(int n) {
    // Write your code here.

    for (int row =0;row<n;row++){
        
          if (row % 2 == 0){
          for (int col=0;col<row+1;col++){
           int printEven = (col % 2 == 0) ? 1 : 0;
           cout<<printEven<<" ";
          }
          }
          else{
          for (int col = 0; col < row + 1; col++) {
           int printOdd = (col % 2 == 0) ? 0 : 1;
           cout << printOdd<<" ";
          }
          }
          cout<<endl;
        
    }
}

