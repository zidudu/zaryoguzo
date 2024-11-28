#include <stdio.h>

int i = 0; //퀵 정렬 단계 출력용 변수

//주어진 부분집합 안에서 피봇의 위치를 확정하여 분할 위치를 정하는 연산
int partition(int a[], int begin, int end, int size) {
	int pivot, L, R, t, temp;
	L = begin;
	R = end;
	//****예제 9-3에서 pivot의 값만 바뀜 *** pivot을 첫번째 원소로 해도 작동됨(추후 설명 더 추가)
	pivot = begin; // 정렬 범위에서 첫 번째 원소 begin을 피봇으로 선택
	printf("\n [%d단계 : pivot = %d ] \n", ++i, a[pivot]);
	while (L < R) {
		while ((a[L] < a[pivot]) && (L < R)) L++; // 왼쪽에서 pivot보다 큰 값의 위치 찾기
		while ((a[R] >= a[pivot]) && (L < R)) R--; //오른쪽에서 pivot보다 작은 값의 위치 찾기
		//L위치가 R보다 낮을때 실행
		if (L < R) { // L과 R 원소의 자리 교환
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
		}
		//L이 피봇인 경우 변경된 피봇의 위치(R)를 다시 저장
		if (L == pivot) pivot = R; // 이걸 하는 이유는 L과 R이 만나게 되면 pivot 도 같아지게 되서 하는거임(추후 추가)
	}
	//if(L<R)
	//while(L<R)
	//(L=R)이 된경우, 
	// 더이상 진행할 수 없으므로 R원소와 피봇원소의 자리를 교환하여 마무리
	//L = R인 경우 교환
	temp = a[pivot];
	a[pivot] = a[R];
	a[R] = temp;
	for (t = 0; t < size; t++) printf("%4d", a[t]); //현재의 정렬 상태 출력
	printf("\n");
	return R; // 정렬되어 확정된 피봇 위치 반환
}
void quickSort(int a[], int begin, int end, int size) {
	int p;
	if (begin < end) {
		p = partition(a, begin, end, size); // 피봇의 위치에 의해 분할 위치 결정
		quickSort(a, begin, p - 1, size); //피봇의 왼쪽 부분집합에 대해 퀵 정렬을 재귀호출
		quickSort(a, p + 1, end, size); // 피봇의 오른쪽 부분집합에 대해 퀵 정렬을 재귀호출
	}
}

int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n 정렬할 원소 : ");
	for (i = 0; i < size; i++) printf("%3d", list[i]);
	printf("\n\n<<<<<<<< 퀵 정렬 수행 >>>>>>>\n");
	quickSort(list, 0, size - 1, size);
	getchar(); return 0;
}
/*
정렬할 원소 :  69 10 30  2 16  8 31 22

<<<<<<<< 퀵 정렬 수행 >>>>>>>

 [1단계 : pivot = 69 ]
  22  10  30   2  16   8  31  69

 [2단계 : pivot = 22 ]
   8  10  16   2  22  30  31  69

 [3단계 : pivot = 8 ]
   2   8  16  10  22  30  31  69

 [4단계 : pivot = 16 ]
   2   8  10  16  22  30  31  69

 [5단계 : pivot = 30 ]
   2   8  10  16  22  30  31  69
*/
