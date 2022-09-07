#include<iostream>
using namespace std;

int chage_val(int *p){
  *p=3;
  return 0;

}
int main(){
  int number=5;
  cout<<number<<endl;
  chage_val(&number); //* *p를 통해 number 참조하여 변경 
  cout<<number<<endl;

}