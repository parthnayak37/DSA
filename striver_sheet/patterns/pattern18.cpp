//https://www.naukri.com/code360/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems


void alphaTriangle(int n) {
    // Write your code here.
    char character ='A';
    for (int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
                  cout<<char(character+n-1-col)<<" ";
        }
        cout<<endl;
    }
}
