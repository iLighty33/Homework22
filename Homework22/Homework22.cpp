#include <iostream>

using namespace std;

template <typename T> void mySwap(T* num1, T* num2);
void myPower(int &n, int m);

int main() {
	setlocale(LC_ALL, "Russian");

	// ������ 1

	const int length = 10;
	int array[length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "������ 1.\n����������� ������:\n[";
	int* pArr = array;
	for (int i = 0; i < 10; i++)
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";

	cout << "�������� ������:\n[";

	for (int i = 0; i < length; i++) {
		if (i % 2 == 0)
			mySwap((pArr + i), (pArr + i + 1));
	}

	for (int i = 0; i < 10; i++)
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";

	// ������ 2

	cout << "\n������ 2.\n";
	cout << "������� �����: ";
	int n, m;
	int& refN = n;
	cin >> n;
	cout << "������� �������: ";
	cin >> m;

	myPower(refN, m);
	cout << "���������: ";
	cout << n << endl;

	return 0;
}

void myPower(int& num1, int m) {
	if (m == 0) {
		cout << 1 << endl;
		return;
	}
	int nTemp = num1;
	int number = 1;
	num1 = number;

	for (int i = 1; i <= m; i++) {
		
		num1 = num1 *  nTemp;

	}

	return;

}

// ������ 1

template <typename T> void mySwap(T* num1, T* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
