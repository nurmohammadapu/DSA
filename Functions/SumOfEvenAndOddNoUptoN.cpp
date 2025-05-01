#include<iostream>
using namespace std;

int evenSum(int n){
  int sum = 0;
  for(int i=0; i<=n; i = i + 2){
    sum = sum + i;
  }
  return sum;
}
int oddSum(int n){
  int sum = 0;
  for(int i=1; i<=n; i = i+2){
    sum = sum + i;
  }
  return sum;
}

int main(){
  int a; 
  cout << "Enter your marks: "<<endl;
  cin >> a;
  int even = evenSum(a);
  int odd = oddSum(a);
  cout <<"Even number Sum up to "<<a<<" is "<<even<<endl;
  cout <<"Odd number Sum up to "<<a<<" is "<<odd<<endl;
}


