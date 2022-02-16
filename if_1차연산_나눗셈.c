#include <stdio.h> //standard input output : 표준 입출력 - .h 헤더파일
int main()
{
   double i, j;
   printf("두개의 숫자를 입력해 주세요! : ");
   scanf("%lf %lf", &i, &j);

   if (j == 0)
   {
      printf("0으로는 나눌 수 없어! \n");
      return 0;
   }

   printf("%f 를 %f로 나눠볼게요! : %f \n", i, j, i / j);

   return 0; //반환
}
