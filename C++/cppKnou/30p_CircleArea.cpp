#include <iostream>
// #define PI 3.14159

using namespace std;

int main() {
	const double PI =3.14159;
	double radius;

	cout << "반경 : ";
	cin>>radius;
	
	double area = radius * radius * PI;
	cout << "면적 :" << area << endl;

	return 0;
}