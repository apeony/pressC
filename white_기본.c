
#include <stdio.h>
int main()
{
   int i = 1, sum = 0;

   while (i <= 100) //조건
   {
      sum += i; // 명령1
      i++;      //명령2 내부순환 후 i <= 100 만족하면 탈출되어 printf 출력
   }

   printf("1 부터 100 까지의 합 : %d \n", sum);

   return 0;
}