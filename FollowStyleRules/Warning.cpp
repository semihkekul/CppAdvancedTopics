#include <iostream>
#include <string>
using namespace std;

int* getPointer() {
	return nullptr;
}
#pragma warning(push)
#pragma warning(disable : 4100)
void func(int x) {

}
#pragma warning(pop)

int main() {
	int i = 5;
	if (i = 3) {
		i++;
	}
	int* p;
	if ( p = getPointer()) {
		i++;
	}
	return 0;
}