/* 배열의 존재 상태? */
#include <stdio.h>
int main()
{
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int *i = arr;
   int sum = 0;
   while (i - arr <= 9)
   {
      sum += (*i++);
      i++;
   }

   printf("%d 확인해 \a", sum / 10);
   return 0;
}