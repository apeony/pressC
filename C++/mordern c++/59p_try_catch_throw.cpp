#include <iostream>
using namespace std;
 
int main()
{
	int a, b;
 
	cout << "두 개의 정수를 입력하세요: ";
	cin >> a >> b;
 
	try {
		if (b == 0) throw b;
		cout << a << "를 " << b << "로 나눈 몫은 " << a/b << "입니다." << endl;
	} catch (int exception) {
		cout << "예외 발생, 나누는 수는 " << b << "가 될 수 없습니다." << endl;
	}
	return 0;
}