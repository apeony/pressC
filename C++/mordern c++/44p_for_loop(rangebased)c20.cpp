#include <iostream>
using namespace std;

int main() {
  for (int primes[] = { 1,2,3,4,5,6,8,23,77,12 }; int i : primes)
cout<<i<<endl;
}