#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;

  for(int row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
      cout<<"*";
    }
    cout<<endl;
  }

}


/*
output:
Enter your number:
5

*****
*****
*****
*****
*****

*/