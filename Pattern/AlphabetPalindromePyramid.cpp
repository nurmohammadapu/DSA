#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;

  for(int row=0; row<n; row++){
    int col;
    for(col=0; col<row+1; col++){
      int ans = col+1 ;
      char ch = ans + 'A' - 1;
      cout<<ch<<" ";
    }

    // reverse couting printing 
    for(int col=row;col>=1;col--){
      int ans = col;
      char ch = ans + 'A' - 1;
      cout<<ch<<" ";
    }
    cout<<endl;
  }

}


/*
output:
Enter your number:
5

A
A B A
A B C B A
A B C D C B A
A B C D E D C B A 

*/