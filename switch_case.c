#include <stdio.h>
int main()
{
   int input;

   printf(" how can I help you\n");
   printf(" select servise number.\n");

   printf(" 1. login\n");
   printf(" 2. serch id\n");
   printf(" 3. remember password\n");
   printf(" 4. end \n");

   scanf("%d", &input);

   switch (input)
   {
   case 1 /* constant-expression */:
      printf("here put in your id & pW \n"); /* code */

      break;

   case 2 /* constant-expression */:
      printf(" really? \n"); /* code */

      break;

   case 3 /* constant-expression */:
      printf("why your brain is so small\n"); /* code */

      break;

   case 4 /* constant-expression */:
      printf("thanks \n"); /* code */

      break;

   default:
      printf("you help me? \n");
      break;
   }

   return 0;
}