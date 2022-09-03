#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

//**초기화
int Initialized(IntStack* s, int max)
{
   s->prt = 0;
   if ((s->stk = calloc(max, sizeof(Int))) == NULL) {
      s -> max = 0;
      return -1;
   }
   s->max = max;
   return 0;
}
