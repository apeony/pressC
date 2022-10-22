#include <iostream>
using namespace std;

int main() {
  int primes[] = { 1,2,3,4,5,6,8,23,77,12 };
  for (int i : primes) {
    cout<<i<<endl;
  }
}