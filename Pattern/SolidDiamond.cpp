#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;
  // upper pyramid
  for (int row=0; row<n; row++){
    // space 
    for(int col=0; col<n-row; col++){
      cout<<" ";
    }
    // star
    for(int col=0; col<row; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
  // lower pyramid
  for (int row=0; row<n; row++){
    // space 
    for(int col=0; col<row; col++){
      cout<<" ";
    }
    // star
    for(int col=0; col<n-row; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}