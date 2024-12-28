#include <stdio.h>
#include <string.h>

struct employee //구조체 선언
{	//구조체의 멤버변수 선언
	char name[10];
	int year;
	int pay;
};


int main() {
	int i;
	struct employee Lee[4]{ //구조체 변수를 사용함 3개의 멤버변수의 값들을 초기화함
		{"이진호",2022,5200},
		{"이한영",2023,4300},
		{"이상원",2023,4500},
		{"이상범",2024,3900}

	};
	for (i = 0; i < 4; i++) { //0~4까지, 즉 구조체 변수 4개를 실행시킴
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 연봉 : %d \n", Lee[i].pay);

	}
	getchar();
}
/*
 이름 : 이진호
 입사 : 2022
 연봉 : 5200

 이름 : 이한영
 입사 : 2023
 연봉 : 4300

 이름 : 이상원
 입사 : 2023
 연봉 : 4500

 이름 : 이상범
 입사 : 2024
 연봉 : 3900
*/
