#include "_C_2-3.h" /*header 선행처리기 : 도입부시작
                     _C_2-3.h 파일을 포함시켰으며, 
                     _C_2-3.h 파일에 <stio.h> 
                     파일 포함되어있으므로 재 포함 하지 않아도 됨*/

void main() // 가장 먼저 호출되는 함수, 모든 프로그램에 반드시 존재해야한다. (필수)
{           //대괄호를 열어 함수를 시작

   int add_result, sub_result;
         //인수를 add_result, sub_result로 정의한다. 
   printf("10과 5를 더하면 %d이다. \n", ADD(10,5));
         //%d 에 ADD 매크로의 인수값 10, 5를 각각 대입하여 결과값을 출력한다.
   printf("10과 5를 빼면 %d이다.   \n", SUB(10,5));
         //%d 에 SUB 매크로의 인수값 10, 5를 각각 대입하여 결과값을 출력한다.
}           //대괄호를 닫아 함수를 끝냄