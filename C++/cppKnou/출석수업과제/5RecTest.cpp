#include <iostream> // 표준라이브러리 헤더파일 소스를 현재 작성중인 프로그램에 결합
using namespace std; // std가 기본 명칭공간으로 사용되도록 하는 코드 std::을 생략한다

int main() { //int 자료형을 갖는 main함수 시작

	int a = 10, b = 20;//int 자료형을 갖는 a값 10, b값 20
	int& aRef = a;	//a를 참조하는 참조변수 aRef를 선언

	cout << "a의 값 : " << a << endl; //a의 값을 출력
	cout << "aRef가 참조하는 값 : " << aRef <<endl << endl; //""안쪽내용 + aRef의 값을 출력
	aRef = 100; //aRef 값 100으로 변경
	cout << "a의 값 : " << a << endl; //a의 값을 출력
	aRef = b;//aRef b를 가르키게 변경
	cout << "a의 값 : " << a << endl; //a의 값을 출력
	
	return 0;//함수 초기화
}//int 자료형을 갖는 main함수 