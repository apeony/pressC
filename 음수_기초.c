#include <stdio.h>
int main()
{
   int a = 2147483647;
   printf("a : %d \n", a);

   a++;
   printf("a : %d \n", a);

   return 0; // 음수가 있는 자료형
}