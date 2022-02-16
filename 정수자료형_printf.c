#include <stdio.h>
int main()
{           //정수자료형 기본 -------------------------
   char a;  //문자형 char,  unsigned char
   int b;   //정수형 int, short, long, unsigned
   float f; //실수형 float, double, long double
   enum spellcome
   {
      s,
      t,
      u,
      v,
      w,
      x,
      y
   }; //열거형
   enum spellcome d1, d2;

   a = 'a';
   b = 2;
   d1 = t;

   printf("a : %d, %c \n", a, a);
   printf("b : %d \a \n", b);
   printf("float : %f \n", f);
   printf("d1 : %d \n", d1);

   return 0;
}