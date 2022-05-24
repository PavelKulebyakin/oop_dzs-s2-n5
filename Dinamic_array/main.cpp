#include"D_Array.h"

int main() 
{

	int len = 12;
	int* arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n";

	switch_f(len, arr);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}