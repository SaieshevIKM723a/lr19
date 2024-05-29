#include <iostream>
using namespace std;
template <typename T>
void power(T x, T& square, T& cube, T& fourthPower) {
	square = x * x;
	cube = square * x;
	fourthPower = cube * x;
}

int main() {
	int x = 5;
	int square, cube, fourthPower;

	power(x, square, cube, fourthPower);

	cout << "Number: " << x << endl;
	cout << "Square: " << square << endl;
	cout << "Cube: " << cube << endl;
	cout << "Fourth power: " << fourthPower << endl;

	return 0;
}
