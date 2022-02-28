/* 상수 포인터? */
#include <stdio.h>
int main()
{
   int a;
   int b;
   int *const pa = &a;

   *pa = 3; // 올바른 문장
   printf(" %d = \n", a);
   return 0;
}