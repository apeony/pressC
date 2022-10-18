#include <iostream> // 표준라이브러리 헤더파일 소스를 현재 작성중인 프로그램에 결합
using namespace std; // std가 기본 명칭공간으로 사용되도록 하는 코드 std::을 생략한다

int main() { //int 자료형을 갖는 main함수 시작

	int data[10]={10,23,5,9,22,48,12,10,55,31}; //data 배열선언 및 값 할당
	int max =data[0] ; //data의 첫 번째 데이터를 max로 가정
  
	cout<<"데이터 :"<<data[0];  //0번 데이터 출력
	for(int i:data){ //나머지 9개의 데이터 비교 함수 시작
 	cout<<" "<<i; //i번 데이터 출력
		if(max<i) //i번 데이터가 max보다 크면 비교
 	  	max = i;//max를 i번 데이터로 바꿈
   }//for함수 끝
	cout << endl << endl; //endl 행 건너뛰기
	cout << "배열의 최댓값 : " << max << endl; //배열의 최대값 max를 출력
		return 0; //함수 초기화
		
}//int 자료형을 갖는 main함수 끝
