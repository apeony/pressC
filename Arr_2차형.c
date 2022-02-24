#include <stdio.h>
int main()
{
   int arr[3][2] = {12, 14, 27, 323, 45, 589}; // 3개 2개씩짝지어서

   printf(" 2행 1 %d\n", arr[1][0]);

   printf(" 1행 1 %d\n", arr[0][0]);
   return 0;
}