#include <stdio.h> //header 선행처리기 : 도입부
#pragma warning(disable: 4996)/* #pragma 컴파일러에게 명령을 보냄 
                                 warning(disable:4996) : 경고제어문으로 경고를 나타나지 않도록 하는 번호
                                 disable:4669 경고 고유 번호
                                 */

int a, b, c; // 정수 변수 선언 a, b, c
int product(int x, int y); //사용자 함수 
//도입부 마감

void main()
{           //대괄호를 열어 함수를 시작
   printf("Enter a number between 1 and 100 : ");
   scanf("%d", &a);

   printf("Enter another number between 1 and 100 : ");
   scanf("%d", &b);

   c = product(a, b);
   printf("%d * %d = %d \n", a, b, c);
}           //대괄호를 닫아 함수를 끝냄

int product(int x, int y)
{
   return ( x * y );
}

