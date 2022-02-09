#include <stdio.h>
int main()
{
   float a = 3.141592f;
   double b = 3.141592;
   int c = 123843;
   int d = 123;
   printf("a : %.2f \n", a);  //소수점 두자리까지
   printf("b : %6.3f \n", b); // 전체 자리수 6개이면서 소수점 세자리까지
   printf("c : %5d \n", c);   // 5자리수 이상이면 그냥 다 표기함
   printf("d : %5d \n", d);   // 5자리수에 맞게 앞에 공백을 추가하여 표기
   return 0;
}