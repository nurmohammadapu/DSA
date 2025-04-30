#include<iostream>
using namespace std;


int getSum(int a,int b);
int main(){
  int a; 
  cout << "Enter a number: "<<endl;
  cin >> a;
  int b;
  cout << "Enter another number: "<<endl;
  cin >> b;
  int sum = getSum(a,b);
  cout <<"Your Sum is:\n"<<sum<<endl;
}

int getSum(int a,int b){
  return a + b;
}

