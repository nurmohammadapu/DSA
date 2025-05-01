#include<iostream>
using namespace std;


char getGrade(int marks){
  if(marks <0 || marks >100){
    return 'F';
  }
  else if(marks >= 90){
    return 'A';
  }
  else if(marks >=80){
    return 'B';
  }
  else if(marks >=70){
    return 'C';
  }
  else if(marks >=60){
    return 'D';
  }
  else if(marks >=50){
    return 'E';
  }  
  else{
    return 'F';
  }
}

int main(){
  int a; 
  cout << "Enter your marks: "<<endl;
  cin >> a;
  char result = getGrade(a);
  cout<<result<<endl;
}


