#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;

  for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
      if(row == 1  || row == n || col == 1 || col == n){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }

}


/*
output:
Enter your number:
5

*****
*   *
*   *
*   *
*****


*/