#include <stdio.h>
int main()
{
   int a;
   double b;

   b = 2.4;
   a = (int)b; //잠시 변경하려는 형 이름

   printf("%d", a);
   return 0;
}