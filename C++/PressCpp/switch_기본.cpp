// switch 문 이용하기
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int user_input;
  cout << "저의 정보를 표시해줍니다" << endl;
  cout << "1. 이름 " << endl;
  cout << "2. 나이 " << endl;
  cout << "3. 성별 " << endl;
  cin >> user_input;

  switch (user_input) {
    case 1:
      cout << "Psi ! " << endl;
      break;

    case 2:
      cout << "99 살" << endl;
      break;

    case 3:
      cout << "남자" << endl;
      break;

    default:
      cout << "궁금한게 없군요~" << endl;
      break;
  }
  return 0;
}