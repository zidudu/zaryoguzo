#include <stdio.h>
int main() {
	//배열 생성
	int array[2][3][4];
	//변수 및 값 생성
	int i, j,k, value = 1;
	//for 문으로 각 배열마다의 값을 보여줌
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				//3차원 배열에 값 저장
				array[i][j][k] = value;
				//출력
				printf("\n array[%d][%d][%d] = %02d", i, j, k, array[i][j][k]);
				//value 증가
				value++;
			}
			
		}
	}

}
