#include <stdio.h>
int main()
{
   int arr[6] = {1, 2, 3, 4, 5, 6};
   int *parr = arr;

   printf("Sizeof(arr) : %d \n", sizeof(arr));   //;배열 자체의 크기 (6개의 원소) * (4바이트) 총 24
   printf("Sizeof(parr) : %d \n", sizeof(parr)); //포인터의 크기를 알려주는 연산자
}