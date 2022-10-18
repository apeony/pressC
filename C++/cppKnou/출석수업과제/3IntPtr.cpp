#include <iostream> // 표준라이브러리 헤더파일 소스를 현재 작성중인 프로그램에 결합
using namespace std; // std가 기본 명칭공간으로 사용되도록 하는 코드 std::을 생략한다

int main() { //int 자료형을 갖는 main함수 시작

	int a = 10, b = 100;//int 자료형을 갖는 a값 10, b값 100
	int* ptr = &a;	//포인터ptr을 선언한 후에 a의 주소를 넣는다.

	cout << "ptr이 가르키는 곳의 값 : " << ptr << endl; //&a의 값을 출력
	*ptr = 20; //ptr이 가리키는 곳에 20을 저장
	cout << "변수 a의 값 : " << a << endl; //a의 값을 출력
	ptr = &b; //ptr이 b를 가리키게 함 
	cout << "변수 b의 값 : " << *ptr << endl; //ptr이 가리키는 의 값을 출력
	
	return 0;//함수 초기화
}//int 자료형을 갖는 main함수 
