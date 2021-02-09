#include <iostream>
using namespace std;

int main2_6() {
	double km, ly;
	cout << "Enter the number of light years: ";
	cin >> ly;
	km = 63240 * ly;
	cout << ly << " light years = " << km << " astronomical units." << endl;
	return 0;
}