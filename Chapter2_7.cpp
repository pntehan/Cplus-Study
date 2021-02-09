#include <iostream>
using namespace std;

void logTime(int hour, int min);

int main2_7() {
	int hour, min;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	logTime(hour, min);
	return 0;
}

void logTime(int hour, int min) {
	cout << "Time: " << hour << ":" << min << endl;
}