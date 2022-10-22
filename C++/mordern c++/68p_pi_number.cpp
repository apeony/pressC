#include <iomanip>
#include <iostream>
#include <numbers>

using namespace std;

int main(int argc, char* argv[]) {
  const double pi = 3.141592653589;

  //출력의 너비만 변경  
  cout << setw(30) << pi << endl;

  //값을 왼쪽으로 정렬하고 남은 공간은 특정 문자로 채우는 것
  cout << "pi is" << setfill('-') << left << setw(30)
    << pi << endl;

  //정규유효숫자와 지수를 이용한 과학표기법 지정
  cout.setf(ios_base::showpos);
  cout << "pi is" << scientific << pi << endl;

  //진수를 바꾸는 조작
  cout << "63 8진법으로" << oct << 63 << endl;
  cout << "63 hexadecimal로 " << hex << 63 << endl;
  cout << "63 decimal로" << dec << 63 << endl;

  //부울값 정수 텍스트 출력
  cout << "pi < 3 :" << (pi < 3) << endl;
  cout << "pi < 3 :" << boolalpha << (pi < 3) << endl;

  
}