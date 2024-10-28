#include <iostream>
#include <stdio.h>
// 71p int a[5]={1,2,3} 이러면 나머지 인덱스에는 기본값 0이 할당됨
//int a[5]={1,2,3,4,5,6} 이러면 5까지는 배열 요소에 할당되지만 나머지 초깃값은 메모리에는 할당되지만 사용할 수 없는 값이됨
//  

using namespace std;
int main(){ 
	int i = 0, n; //n은 구구단 숫자
	int multiply[9]; //구구단의 배열값

	printf("\n1~9의 정수를 입력하세요 : ");

	while (1)
	{
		scanf_s("%d", &n); //&n 은 n의 주소를 가리킨다. 그래서 scanf에 입력한 정수값이 n의 주소로 들어감
		if (n < 0 || n>9) { //n이 0보다 작거나 9보다 크면 안되니 이렇게 if 써줌
			printf("\n 1~9의 정수를 입력하세요 : "); // 다시 입력하라고 나옴

		}
		else  //아니면 걍 나옴
			break;
	}

	printf("\n");  //줄바꿈 한번 해줌
	for (i = 0; i < 9; i++) { //9번 반복
		multiply[i] = n * (i + 1); //n과 1~9까지의 값을 차례대로 곱해서 배열 요소에 넣는걸 9번 반복
		printf("%d * %d = %d \n", n, (i + 1), multiply[i]); // 곱한거 출력
	}
	
	getchar(); getchar();
}
