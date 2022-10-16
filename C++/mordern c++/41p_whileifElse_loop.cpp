/* while 문 - if else  */
#include <iostream>

using namespace std;

int main() {
  int x = 20;
  while (x != 1) {
    cout << x << endl;
    if (x % 2 == 1)
      x = 3 * x + 1;
    else
      x = x / 2;


    cout << "x를 홀수라면 짝수로 만들고 짝수라면 /2 \n" << x << endl;
    return 0;
  }
}