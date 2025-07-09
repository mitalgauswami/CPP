#include <iostream>

int main() {
	int* arr = new int[8];
	for (int i=0; i<8; ++i) {
		arr[i] = i + 1;
	}
	
	for (int i = 0; i<8; ++i) {
		std::cout << arr[i] <<"";
	}
	
	std::cout << std::endl;
	delete[] arr;
	
	return 0;
}
