
#include <stdio.h>
int main()
{
   unsigned int b = -1;
   printf("b : %u \n", b);

   b++;
   printf("b : %u \n", b); //자료형 크기 초과하면 전체 버려져서 0

   return 0; // 음수가 없는 자료형
}