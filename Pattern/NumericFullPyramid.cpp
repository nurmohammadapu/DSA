#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;
  

  for(int row=0; row<n; row++){
    // space
    for (int col=0; col<n-row-1; col++){
      cout<<" ";
    }
    // first pyramid 
    for (int col=0; col< row+1; col++){
      cout<<row + col + 1;
    }
    // second pyramid
    for (int col=0; col<row; col++){
      cout<<2*row - col;
    }
    cout<<endl;
  }
}

/*
output:
Enter your number:
5
    1
   232
  34543
 4567654
567898765

*/
