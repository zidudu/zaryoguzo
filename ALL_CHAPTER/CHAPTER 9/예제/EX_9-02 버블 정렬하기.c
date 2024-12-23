#include <stdio.h>
void bubbleSort(int a[], int size) {
	int i, j, t, temp;

	//앞의 값과 그 뒷값을 비교하여 정렬하는 방식. 맨 뒷값부터 정렬됨.
	for (i = size - 1; i > 0; i--) {
		printf("\n %d단계>>", size - i);
		for (j = 0; j < i; j++) {
			//앞자리가 뒷자리보다 클때 
			if (a[j] > a[j + 1]) {
				//교환
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%3d ", a[t]);
		}
	}
}
int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n<<<<<<<< 버블 정렬 수행 >>>>>>>>");
	bubbleSort(list, size);
	getchar(); return 0;
}
/*
정렬할 원소 :  69  10  30   2  16   8  31  22
<<<<<<<< 버블 정렬 수행 >>>>>>>>
 1단계>>
         10  69  30   2  16   8  31  22
         10  30  69   2  16   8  31  22
         10  30   2  69  16   8  31  22
         10  30   2  16  69   8  31  22
         10  30   2  16   8  69  31  22
         10  30   2  16   8  31  69  22
         10  30   2  16   8  31  22  69
 2단계>>
         10  30   2  16   8  31  22  69
         10   2  30  16   8  31  22  69
         10   2  16  30   8  31  22  69
         10   2  16   8  30  31  22  69
         10   2  16   8  30  31  22  69
         10   2  16   8  30  22  31  69
 3단계>>
          2  10  16   8  30  22  31  69
          2  10  16   8  30  22  31  69
          2  10   8  16  30  22  31  69
          2  10   8  16  30  22  31  69
          2  10   8  16  22  30  31  69
 4단계>>
          2  10   8  16  22  30  31  69
          2   8  10  16  22  30  31  69
          2   8  10  16  22  30  31  69
          2   8  10  16  22  30  31  69
 5단계>>
          2   8  10  16  22  30  31  69
          2   8  10  16  22  30  31  69
          2   8  10  16  22  30  31  69
 6단계>>
          2   8  10  16  22  30  31  69
          2   8  10  16  22  30  31  69
 7단계>>
          2   8  10  16  22  30  31  69
*/
