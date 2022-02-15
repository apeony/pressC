#include <stdio.h>
int main()
{
   double celsius; //섭씨온도

   printf("섭씨를 화씨로 변경하는 입력형 프로그램 \n");
   printf("섭씨 온도를 입력하시오 : ");
   scanf("%lf", &celsius);

   printf("섭씨 %f = 화씨 %f \n", celsius, 9 * celsius / 5 + 32);
   return 0;
}