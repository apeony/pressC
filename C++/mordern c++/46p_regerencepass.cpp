#include <iostream>
using namespace std;



void increment(int& x) {
  x++;
}
int main() {
  int i = 4;
  increment(i);
  cout<<"i is "<<i<<endl;
}