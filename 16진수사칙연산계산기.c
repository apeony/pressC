#include <stdio.h>

int main()
{
   int i, j;

   printf("16진수 아무거나 2개를 입력하세요 : ");
   scanf("%x %x", &i, &j);

   printf("16진수 %x 의 10진수값은 %d 이고 16진수 %x 의 10진수값은 %d 이다. \n", i, i, j, j);

   printf("10진수 %d * %d = %d 이고 이를 16진수로 나타내면 %x가 된다. \n", i, j, i * j, i * j);
   printf("10진수 %d + %d = %d 이고 이를 16진수로 나타내면 %x가 된다. \n", i, j, i + j, i + j);
   printf("10진수 %d - %d = %d 이고 이를 16진수로 나타내면 %x가 된다. \n", i, j, i - j, i - j);
   printf("10진수 %d / %d = %d 이고 이를 16진수로 나타내면 %x가 된다. \n", i, j, i / j, i / j);

   //%o출력 8진수 %d 10진수  %x 16진수

   return 0;
}