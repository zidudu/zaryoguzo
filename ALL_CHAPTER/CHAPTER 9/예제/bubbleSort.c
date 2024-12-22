#include <stdio.h>
void bubbleSort(int a[], int size) {
	int i, j, temp,t;
	for (i = size - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%4d ", a[t]);
			
		}

	}
}
int main() {
	int i, size;
	int a[8] = { 69,10,30,2,16,8,31,22 };
	size = sizeof(a) / sizeof(a[0]);
	bubbleSort(a, size);
}
