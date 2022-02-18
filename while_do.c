#include <stdio.h>
int main()
{
   int i = 1, sum = 0;

   do
   {
      sum += i;     //명령
      i++;          //명령
   } while (i < 1); //조건식    명령실행 전 조건식이 참인지 확인 후 실행됨
   printf(" sum : %d \n", sum);
   return 0;
}