#include <stdio.h>
void insertionSort(int a[], int size) {
	int i, j, t, temp;

	for (i = 1; i < size; i++) {
		temp = a[i]; // i 위치에 있는 값을 일단 저장하고 나중에 찾은 j값과 이 값을 교체함
		j = i;
		while ((j > 0) && (a[j - 1] > temp)) { //temp의 값보다 a[j-1]값이 더 클때
			a[j] = a[j - 1]; // 뒷 자리에 앞 자리 값을 넣어 삽입 자리를 만드는 것. 이게 선택정렬과의 차이점. 뒤로 자리를 땡긴다고 생각하기
			//a[i]값은 덮어씌워지지만, temp에 저장해둬서 문제없음
			j = j - 1; // j는 감소
		}
		a[j] = temp; //삽입자리 j에 temp 값을 넣음
		printf("\n %d단계 : ", i);
		for (t = 0; t < size; t++) printf("%3d ", a[t]);
	}
}
int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };// 정렬할 원소
	int size = sizeof(list) / sizeof(list[0]); //list 배열의 원소 개수
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++)printf("%3d ", list[i]); // 정렬 전의 원소 출력
	printf("\n\n<<<<<<<<< 삽입 정렬 수행 >>>>>>"); 
	insertionSort(list, size); //삽입 정렬 함수 호출

	getchar(); return 0;
}
/*
정렬할 원소 :  69  10  30   2  16   8  31  22

<<<<<<<<< 삽입 정렬 수행 >>>>>>
 1단계 :  10  69  30   2  16   8  31  22
 2단계 :  10  30  69   2  16   8  31  22
 3단계 :   2  10  30  69  16   8  31  22
 4단계 :   2  10  16  30  69   8  31  22
 5단계 :   2   8  10  16  30  69  31  22
 6단계 :   2   8  10  16  30  31  69  22
 7단계 :   2   8  10  16  22  30  31  69

*/

