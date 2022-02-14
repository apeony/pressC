#include <stdio.h>
int main()
{
   int a, b;
   a = 10;
   b = 3;
   printf("a + b = %d \n", a + b);
   printf("a - b = %d \n", a - b);
   printf("a * b = %d \n", a * b);
   printf("a / b = %d \n", a / b);
   printf("a %% b = %d \n", a % b); // %% % 앞쪽 %%는 d% 와 같이 사용될 수 있으므로 %% 로 표기
   return 0;
}