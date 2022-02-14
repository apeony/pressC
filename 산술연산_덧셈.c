#include <stdio.h>
int main()
{
   int a = 1, b = 1, c = 1, d = 1, e = 1;

   a = a + 1;
   printf("a : %d \n", a);

   b += 1;
   printf("b : %d \n", b);

   ++c;
   printf("c : %d \n", c);

   d++;
   printf("d : %d \n", d);

   printf("++f : %d \n", ++e); // 먼저 +1 더한 후 결과 반환

   e = 1;
   printf("f++ : %d \n", e++); //결과 반환 후 +1
   printf("f : %d \n", e);
   return 0;
}