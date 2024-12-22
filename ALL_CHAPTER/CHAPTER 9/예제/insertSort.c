#include <stdio.h>
void insertSort(int a[], int size) {
	int temp, i, j,t;
	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i;
		while (a[j - 1] > temp && j > 0) {
			a[j] = a[j - 1];
			j--;


		}
		a[j] = temp;
		for (t = 0; t < size; t++) printf("%4d ", a[t]);
		printf("\n");
	}
}

int main() {
	int i, size;
	int a[8] = { 69,10,30,2,16,8,31,22 };
	size = sizeof(a) / sizeof(a[0]);
	insertSort(a, size);
}
