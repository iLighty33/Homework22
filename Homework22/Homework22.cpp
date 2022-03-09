#include <iostream>

using namespace std;

template <typename T> void mySwap(T* num1, T* num2);
void myPower(int *n, int m);

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1

	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Изначальный массив:\n[";
	int* pArr = array;
	for (int i = 0; i < 10; i++)
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";


	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 1; i++) {
		if (*(pArr) < *(pArr + 1)) 
			mySwap(pArr, (pArr + 1));
		
		if (*(pArr + 2) < *(pArr+3))
			mySwap(pArr + 2, (pArr + 3));

		if (*(pArr + 4) < *(pArr + 5))
			mySwap(pArr + 4, (pArr + 5));

		if (*(pArr + 6) < *(pArr + 7))
			mySwap(pArr + 6, (pArr + 7));

		if (*(pArr + 8) < *(pArr + 9))
			mySwap(pArr + 8, (pArr + 9));

		if (*(pArr + 9) < *(pArr + 10))
			mySwap(pArr + 9, (pArr + 10));

	}

	for (int i = 0; i < 10; i++)
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";

	// Задача 2

	int n = 10;
	myPower(&n, 3);
	cout << n << endl;

	return 0;
}

void myPower(int* num1, int m) {
	if (m == 0) {
		cout << 1 << endl;
		return;
	}
	int nTemp = *num1;
	int number = 1;
	num1 = &number;

	
	for (int i = 1; i <= m; i++) {
		
		*num1 = *num1 *  nTemp;

	}

	cout << *num1 << endl;

	
	return;
	

}

// Задача 1

template <typename T> void mySwap(T* num1, T* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
