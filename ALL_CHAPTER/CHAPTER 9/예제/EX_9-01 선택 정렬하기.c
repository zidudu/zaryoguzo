#include <stdio.h>
void SelectionSort(int a[], int size) {
	int i, j, t, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min])min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d단계 : ", i + 1);
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}

int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n<<<<<<< 선택 정렬 수행 >>>>>>\n");
	SelectionSort(list, size);
	getchar(); return 0;
}
/*

정렬할 원소 :  69  10  30   2  16   8  31  22
<<<<<<< 선택 정렬 수행 >>>>>>

1단계 :   2  10  30  69  16   8  31  22
2단계 :   2   8  30  69  16  10  31  22
3단계 :   2   8  10  69  16  30  31  22
4단계 :   2   8  10  16  69  30  31  22
5단계 :   2   8  10  16  22  30  31  69
6단계 :   2   8  10  16  22  30  31  69
7단계 :   2   8  10  16  22  30  31  69
*/
