#include <stdio.h>
int i = 0;
int partition(int a[], int begin, int end, int size) {
	int L, R, temp, t, pivot;
	L = begin; R = end;
	pivot = (begin + end) / 2;
	printf(" %d단계 => pivot = %d", ++i, pivot);
	while (L < R) {
		while (a[L] < a[pivot] && L < R) L++;
		while (a[R] >= a[pivot] && L < R) R--;
		if (L < R) {
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
			if (L == pivot) pivot = R;
		}
	}
	temp = a[R];
	a[R] = a[pivot];
	a[pivot] = temp;
	for (t = 0; t < size; t++) printf("%4d ", a[t]);
	printf("\n");

	return R;

}

void quickSort(int a[], int begin, int end, int size){
	int p;

	if (begin < end) {
		p = partition(a, begin, end ,size);
		quickSort(a, begin, p - 1, size);
		quickSort(a, p + 1, end, size);
	}
}
int main() {
	int i, size;
	int a[8] = { 69,10,30,2,16,8,31,22 };
	size = sizeof(a) / sizeof(a[0]);
	quickSort(a, 0,size-1, size);
}
