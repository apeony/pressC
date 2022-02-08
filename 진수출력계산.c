#include <stdio.h>
int main()
{
   int a;
   a = 127;
   printf("a = %d 진수 %o \n", 8, a); //%o출력 8진수 %d 10진수  %x 16진수
   printf("a = %d 진수 %d \n", 10, a);
   printf("a = %d 진수 %x \n", 16, a);
   return 0;
}