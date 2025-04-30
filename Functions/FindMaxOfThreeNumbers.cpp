#include<iostream>
using namespace std;


int findMax(int a,int b,int c){
  if(a>b && a>c){
   return a;
  }
  else if (b>a && b>c){
    return b;
  }
  else{
    return c;
  }
}

int main(){
  int a; 
  cout << "Enter your fast number: "<<endl;
  cin >> a;
  int b;
  cout << "Enter your second number: "<<endl;
  cin >> b;
  int c;
  cout << "Enter your last number: "<<endl;
  cin >> c;
  int maximumNumber = findMax(a,b,c);
  cout <<"Your Maximum Number is: "<<maximumNumber<<endl;
}


