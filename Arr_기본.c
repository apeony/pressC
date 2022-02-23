#include <stdio.h>
int main()
{
   int arr[5] = {12, 14, 27, 323, 45, 589};
   int i;

   for (i = 0; i < 5; i++)
   {

      printf("%d번째는? %d\n", i + 1, arr[1]);
   }

   return 0;
}