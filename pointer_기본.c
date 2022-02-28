#include <stdio.h>
int main()
{
   int a;
   int *p; // 단항연산자 *a

   p = &a; //정의된 변수의 주소값은 변동없음을 이용함
   a = 2;

   printf("%p 포인터 p에 들어있는 값 \n", p); //%p 16진수형태로 출력해주세요
   printf("%p a 의 포인터 위치  \n", &a);     //& 연산자 : 변수의 주소값 알아가는 법

   printf("%d \n", *p); //%d 10진수로 *p 의 주소값에 있는 데이터로
   return 0;
}