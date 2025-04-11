#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;

  // upper part 
  for(int row=0; row<n; row++){
    // half pyramid
    for(int col=0; col<n-row; col++){
      cout<<"*";
    }
    // space pyramid 
    for(int col=1; col<2*row+1; col++){
      cout<<" ";
    }
    // half pyramid
    for(int col=0; col<n-row; col++){
      cout<<"*";
    }
    cout<<endl;
  }
  // lower part 
  for(int row=0; row<n; row++){
    // half pyramid
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    // space pyramid 
    for(int col=1; col<2*n-2*row-1; col++){
      cout<<" ";
    }
    // half pyramid
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    cout<<endl;
  }
}
 




