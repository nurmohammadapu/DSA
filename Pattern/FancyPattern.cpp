#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number:\n";
  cin>>n;

  // upper part
  for (int row=0; row<n; row++){
    for (int col=0; col<=row; col++){
     cout<<row+1;
      if(col==row){
        break;
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;

  }
  // lower part
  for (int row=0; row<n; row++){
    for (int col=0; col<n-row; col++){
      cout<<n-row;
      if(col==n-row-1){
        break;
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }

}
 
/* 
output:
n=4
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1 
*/

