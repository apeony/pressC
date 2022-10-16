#include <iostream>
#include <concepts>

using namespace std;

template <typename T>


concept internal = std::is_integtal<T>::value;

Integral auto gdc(Integral auto a, Integral auto b) {
	if (b == 0)return a;
	else return gcd(b, a % b;)
}
