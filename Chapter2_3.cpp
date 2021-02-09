#include <iostream>
using namespace std;

void log1();
void log2();

int main2_3() {
	log1();
	log1();
	log2();
	log2();
	cin.get();
	return 0;
}

void log1() {
	cout << "Three blind mice" << endl;
}

void log2() {
	cout << "See how they run" << endl;
}
