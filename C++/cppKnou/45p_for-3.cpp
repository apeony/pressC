#include <iostream>
using namespace std;

int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,15 };

	for (int i = 0; i < 10; i++)
	
		cout << "arr value is " << arr[i] << endl;

	
	int lastarr = 0;
	
	for (int& a : arr)

		lastarr=++a;

	cout << "last + 1 =  " << lastarr << endl;

	return 0;
}



