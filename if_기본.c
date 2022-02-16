#include <stdio.h> //standard input output : 표준 입출력 - .h 헤더파일
int main()
{
   int i, j;
   printf("숫자를 입력해 주세요! : ");
   scanf("%d", &i);

   if (i == 7)
   {
      printf("행운의 숫자 7을 입력했군요~! \n");
   }
   else
   {
      printf("%d만큼 행운이 찾아올거예요! 믿어요! \n", i);
   }

   return 0; //반환
}
