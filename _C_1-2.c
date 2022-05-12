#include <stdio.h> //header 선행처리기 : 도입부시작
#pragma warning(disable: 4996)/* #pragma 컴파일러에게 명령을 보냄 
                                 warning(disable:4996) : 경고제어문으로 경고를 나타나지 않도록 하는 번호
                                 disable:4669 경고 고유 번호
                                 */

int a, b, c; // 정수 변수 선언 a, b, c
int product(int x, int y); //사용자 함수로 변수 선언 int x, int y 

//도입부 마감

void main()// 모든 프로그램에 반드시 존재해야 하는 필수 함수
{           //대괄호를 열어 함수를 시작
   printf("Enter a number between 1 and 100 : ");/*출력함수 
                                                (중괄호 안 Enter a number between 1 a 100 : 를 출력한다. 
                                                세미콜론 ; 은 선행처리기를 제외한 모든 문장의 끝에 붙여준다. */
   scanf("%d", &a); /*scanf 모든 자료형을 입력할 수 있는 입력함수
                     %d 는 10진 정수형을 입력받으며, 이는 a에 저장된다. 콤마 뒤 &a는 주소연산자를 붙인 a의 위치를 뜻한다. */

   printf("Enter another number between 1 and 100 : "); /*출력함수 
                                                (중괄호 안 Enter another number between 1 and 100 : 를 출력한다. 
                                                세미콜론 ; 은 선행처리기를 제외한 모든 문장의 끝에 붙여준다. */
   
   scanf("%d", &b);/*scanf 모든 자료형을 입력할 수 있는 입력함수
                     %d 는 10진 정수형을 입력받으며, 이는 b에 저장된다. 콤마 뒤 &b는 주소연산자를 붙인 b의 위치를 뜻한다. */

   c = product(a, b); //조건연산자로 c = product(a,b) 입력받은 a,b의 값을 대입한다.
   printf("%d * %d = %d \n", a, b, c); /*출력함수 (정수 * 정수 = 정수)로
                                        출력하는 값에 a * b = c의 값을 각 대입하고,
                                       \n은 출력 시 줄바꿈을 하여 값을 출력한다.  */
}           //대괄호를 닫아 함수를 끝냄

int product(int x, int y) //사용자 함수로 변수 선언 int x, int y 
{                         //대괄호를 열어 함수를 시작
   return ( x * y ); // 값을 돌려주는 return 함수로, 사용자 함수의 변수 int x, int y를 곱한다.
}                        //대괄호를 닫아 함수를 끝냄
