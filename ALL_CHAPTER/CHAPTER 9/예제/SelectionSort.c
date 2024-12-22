#include <stdio.h>
void SelectionSort(int a[], int size) {
	int i, j, min, t, temp;
	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i+1; j < size; j++) {
			if (a[j] < a[min]) {
				min = j;
			}

		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
		for (t = 0; t < size; t++) printf("%4d ", a[t]);
		printf("\n");
	}
}
int main() {
	int i, size;
	int a[8] = { 69,10,30,2,16,8,31,22 };
	size = sizeof(a) / sizeof(a[0]);
	SelectionSort(a, size);
}
