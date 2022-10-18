#include <iostream> // 표준라이브러리 헤더파일 소스를 현재 작성중인 프로그램에 결합
using namespace std; // std가 기본 명칭공간으로 사용되도록 하는 코드 std::을 생략한다

int main() { //int 자료형을 갖는 main함수 시작

	int* intPtr ;//int 포인터변수intPtr 선언
	intPtr = new int[4];//4개의 int값을 가진 저장할 메모리 할당 -

	*intPtr = 10; //intPtr 이 가리키는 값에 10을 저장 ( 0번 데이터 )
	*(intPtr + 1) = 20; // intPtr [0 +1] 1번 데이터 저장
	intPtr[2] = 30; // 3번 데이터 저장
	intPtr[3] = 40; //4번 데이터 저장
	
	for (int* p = intPtr, i = 0; i < 4; i++) { // 0번 데이터부터 순차적으로 i값 증가
		cout << p[i] << " "; //p가 가리키는 곳의 값을 출력한 후  p를 다음으로 이동
	cout << endl; //줄바꿈
	}//for함수종료
	
	delete []intPtr;//4개의 할당한 저장 메모리 반환  -
	

}//int 자료형을 갖는 main함수 