#include <stdio.h> //standard input output : 표준 입출력 - .h 헤더파일
int main()
{

   int i, sum = 0;
   for (i = 0; i <= 10; ++i)
   {
      sum = sum + i;
   }
   printf("1부터 10까지의 합 %d \n", sum);
   return 0; //반환
}
