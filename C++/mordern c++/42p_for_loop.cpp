//for loop 
#include <iostream>
using namespace std;
int main() {
  double v[3], w[] = { 2.,4.,5., }, x[] = { 6.,8.,7. };

  for (int i = 0; i < 3; i++) {
    v[i] = w[i] + x[i];
  }

  for (int i = 0; i < 3; i++) {
   cout<<i<<" => "<<v[i]<<endl;
  }
  return 0;
}