/* Do while */
#include <iostream>
using namespace std;

int main() {
  double eps = 0.001;
  do {
    cout << "eps is " << eps << endl;
    eps /= 2.0;
  } while (eps > 0 / 0.01); 

}