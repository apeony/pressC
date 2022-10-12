#include <iostream>
using namespace std;

int main() {
	int val, total = 0;

	for (int i = 0; i < 10; i++) {

		cout << "input number " << i + 1 << " is enter ";
		

		cin >> val;
		total += val;
	}
	cout << "here is all total is " << total << endl;
	
	return 0;
	
}