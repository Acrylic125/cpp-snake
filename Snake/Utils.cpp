#include "Utils.h"

namespace utils {
	template <class T>
	int sizeOfArray(T* arr) {
		return sizeof(arr) / sizeof(arr[0]);
	}

	void test() {
		cout << "TestEEEEE" << endl;
	}
}