#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;
  for (int row=0; row<n; row++){
    // space loop
    for(int col=0; col<=n-row-1; col++){
      cout<<" ";
    }
    // star loop
    for(int col=0; col<row+1; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
 
