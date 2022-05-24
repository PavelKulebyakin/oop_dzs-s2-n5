#include"D_Array.h"

void switch_f(int len, int* arr)
{
	int temp;
	for (int i = 0; i < len - 1; i+=2) {
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
}
