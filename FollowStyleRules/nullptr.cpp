#include <iostream>
#include <string>
using namespace std;

void someFunc(const int* ip){
	cout << "pointer\n";
}

void someFunc(const int i) {
	cout << "number\n";
}

int mainNull() {

	int* ip = NULL;
	someFunc(ip);
	ip = nullptr;
	someFunc(ip);


	return 0;
}