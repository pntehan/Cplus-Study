#include <iostream>
using namespace std;

int main2_5() {
	int cel;
	float fah;
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	fah = 1.8 * cel + 32;
	cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit." <<endl;
	return 0;
}