#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {

	char str[100];
	cout << "입력 : ";
	cin>>cin.getline(str, 100);

	count_num = 0;
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == '') count_num++;
	
	}


	cout << "숫자갯수는 :  " << count_num << endl;
	return 0;
}