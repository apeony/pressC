#include <stdio.h> //header 선행처리기 : 도입부
void main() // 가장 먼저 호출되는 함수, 모든 프로그램에 반드시 존재해야한다. (필수)
{           //대괄호를 열어 함수를 시작
   printf("char 자료형 크기 :  %d byte \n", sizeof(char));
   //1. char : 문자형 변수명 
   //–128 to 127 의 범위를 갖는다. 
   printf("signed char 자료형 크기 :  %d byte \n", sizeof(signed char));
   //2. signed : 부호를 가질 수 있으며 양수와 음수 전부 표현이 가능하다. 
   printf("unsigned char 자료형 크기 :  %d byte \n", sizeof(unsigned char));
   //3. unsigned : 부호를 가질 수 없으며 양수만 표현 가능하다. 값이 음수 혹은 양수인지 구분은 불가능하다.
   //0 to 255 의 범위를 갖는다.
   printf("short 자료형 크기 :  %d byte \n", sizeof(short));
   //4. short : 정수형 변수명
   //–32,768 to 32,767 의 범위를 갖는다.
   printf("short int 자료형 크기 :  %d byte \n", sizeof(short int));
   //5. short int : "짧은" 정수형 변수명
   printf("signed short 자료형 크기 :  %d byte \n", sizeof(signed short));
   //6. signed short : 양, 음수를 구분할 수 있는 부호가 있는 정수형 변수명
   printf("signed short int 자료형 크기 :  %d byte \n", sizeof(signed short int));
   //7. signed short int : 양, 음수를 구분할 수 있는 부호가 있는 "짧은" 정수형 변수명
   printf("unsigned short 자료형 크기 :  %d byte \n", sizeof(unsigned short));
   //8. unsigned short : 양, 음수를 구분할 수 없으며 부호가 없는 정수형 변수명
   //0 to 65,535 의 범위를 갖는다.
   printf("unsigned short int 자료형 크기 :  %d byte \n", sizeof(unsigned short int));
   //9. unsigned short int : 양, 음수를 구분할 수 없으며 부호가 없는 "짧은" 정수형 변수명
   printf("int 자료형 크기 :  %d byte \n", sizeof(int));
   //10. int : 정수형 변수명

   printf("signed int 자료형 크기 :  %d byte \n", sizeof(signed int));
   //11. signed int : 양, 음수를 구분할 수 있는 부호가 있는 정수형 변수명
   printf("unsigned 자료형 크기 :  %d byte \n", sizeof(unsigned));
   //12.unsigned : 양, 음수를 구분할 수 없으며 부호가 없는 자료형
   printf("unsigned int 자료형 크기 :  %d byte \n", sizeof(unsigned int));
   //13. unsigned int : 양, 음수를 구분할 수 없으며 부호가 없는 정수형 변수명
   printf("long 자료형 크기 :  %d byte \n", sizeof(long));
   //14. long : 정수형 변수명
   //–2,147,483,648 to 2,147,483,647 의 범위를 갖는다.
   printf("long int  자료형 크기 :  %d byte \n", sizeof(long int));
   //15. long int : "긴" 정수형 변수명
   printf("signed long 자료형 크기 :  %d byte \n", sizeof(signed long));
   //16. signed long : 양, 음수를 구분할 수 있는 부호가 있는 정수형 변수명
   printf("signed long int 자료형 크기 :  %d byte \n", sizeof(signed long int));
   //17. signed long int : 양, 음수를 구분할 수 있는 부호가 있는 "긴" 정수형 변수명
   printf("unsigned long 자료형 크기 :  %d byte \n", sizeof(unsigned long));
   //18. unsigned long : 양, 음수를 구분할 수 없으며 부호가 없는 정수형 변수명
   //0 to 4,294,967,295 의 범위를 갖는다.
   printf("unsigned long int 자료형 크기 :  %d byte \n", sizeof(unsigned long int));
   //19. unsigned long int : 양, 음수를 구분할 수 없으며 부호가 없는 "긴" 정수형 변수명
   printf("long long 자료형 크기 :  %d byte \n", sizeof(long long));
   //20. long long : 정수형 변수명
   //– 9,22 3,37 2,03 6,85 4,77 5,808 to  9,22 3,37 2,03 6,85 4,77 5,80의 범위를 갖는다. 

   printf("long long int 자료형 크기 :  %d byte \n", sizeof(long long int));
   //21. long long int : "아주 긴" 정수형 변수명
   printf("signed long long 자료형 크기 :  %d byte \n", sizeof(signed long long));
   //22. signed long long : 양, 음수를 구분할 수 있는 부호가 있는 정수형 변수명
   printf("signed long long int 자료형 크기 :  %d byte \n",sizeof(signed long long int));
   //23. signed long long int : 양, 음수를 구분할 수 있는 부호가 있는 "아주 긴" 정수형 변수명
   printf("unsigned long long 자료형 크기 :  %d byte \n", sizeof(unsigned long long));
   //24. unsigned long long : 양, 음수를 구분할 수 없으며 부호가 없는 정수형 변수명
   printf("unsigned long long int 자료형 크기 :  %d byte \n",sizeof(unsigned long long int));
   //25. unsigned long long int : 양, 음수를 구분할 수 없으며 부호가 없는 "아주 긴" 정수형 변수명
   printf("float 자료형 크기 :  %d byte \n", sizeof(float));
   //26. float : 실수형 변수명
   printf("double 자료형 크기 :  %d byte \n", sizeof(double));
   //27. double : 실수형 변수명
   printf("long double 자료형 크기 :  %d byte \n", sizeof(long double));
   //28. long double : 실수형 변수명
}           //대괄호를 닫아 함수를 끝냄

//결과값이 교재와 달라 인터넷을 검색해 본 결과 64–bit Size의 컴파일러로 컴파일하여 아래 값을 출력함을 확인하였다.
