/* new 와 delete 의 사용 */
#include <iostream>

int main() {
  int* p = new int; //int 크기 공간 할당
  *p = 10; //할당공간에 값 삽입

  std::cout << *p << std::endl;

  delete p; //할당공간 해제
  return 0;
}