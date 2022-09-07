#include<iostream>
using namespace std;


int main() {
  int a = 3;
  int& another_a = a; //another_a = a
  another_a = 5;
  
  cout << a << endl;

  cout << another_a << endl;

  return 0;
}