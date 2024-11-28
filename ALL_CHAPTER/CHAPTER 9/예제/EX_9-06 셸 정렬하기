#include <stdio.h>
void intervalSort(int a[], int begin, int end, int interval) {
	int i, j, item;
	for (i = begin + interval; i <= end; i = i + interval) {
		item = a[i];
		//삽입 정렬 수행
		for (j = i - interval; j >= begin && item < a[j]; j = j - interval) {
			a[j + interval] = a[j]; 
		}
		//삽입 위치 j + interval (for문에서 j값이 감소하고 for문 종료되기 때문에 +interval을 해준다) 에 item을 넣는다.
		a[j + interval] = item; 
	}
}
void shellSort(int a[], int size) {
	int i, interval;
	interval = size / 2;
	while (interval >= 1) {
		for (i = 0; i < interval; i++) intervalSort(a, i, size - 1, interval); //셸 정렬 수행. for문으로 반복적으로 수행하여 앞자리부터 정렬함
		printf("\n interval=%d >> ",interval);
		for (i = 0; i < size; i++) printf("%d ", a[i]);
		printf("\n");
		interval = interval / 2; //interval 값을 반으로 나눠서 간격을 낮춤
	}
}

int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22}; //나중에 24값을 하나 더 추가해서 해보기.
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n\n<<<<<<< 셸 정렬 수행 >>>>>>>\n");
	shellSort(list, size); // 셸 정렬 함수 호출

	getchar(); return 0;
}
/*
정렬할 원소 :  69  10  30   2  16   8  31  22

<<<<<<< 셸 정렬 수행 >>>>>>>

 interval=4 >> 16 8 30 2 69 10 31 22

 interval=2 >> 16 2 30 8 31 10 69 22

 interval=1 >> 2 8 10 16 22 30 31 69
*/
