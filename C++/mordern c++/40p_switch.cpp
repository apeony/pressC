#include <iostream>
using namespace std;

int main() {
	int memuborad;

	cout << "안녕하세요 주문하시겠습니까" << endl;
	cout << "1. 햄버거 주세요" << endl;
	cout << "2. 감자튀김 주세요" << endl;
	cout << "3. 생각해볼게요"<< endl;
	cin >> memuborad;
	
	switch (memuborad) {
		case 1:
			cout << "햄버거 드릴게요!" << endl;
			break;

		case 2:
			cout << "감자튀김 곧 나와요!" << endl;
			break;
		default:
			cout << "필요한거 없으신걸까요? " << endl;
			break;
	}
	return 0;
	
}