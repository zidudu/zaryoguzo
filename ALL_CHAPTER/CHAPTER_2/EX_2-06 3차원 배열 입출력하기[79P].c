#include <iostream>
#include <stdio.h>
//문자열: 문자를 나열한 것 //""로 표시
//문자열을 저장하려면 문자열을 구성하는 문자를 연속해서 저장해야 하므로 배열을 사용함
//char s2[10]="string";  이렇게 하면 문자열의 끝을 나타내는 \0(NULL)이 마지막에 추가되서 실제 문자열 크기보다 1바이트 큼
//char s2[10]={'s','t','r','i','n','g'} 이렇게 쓰면 \0이 안생김 
using namespace std;
int main(){ 

	//예제 2-5 입력한 문자열의 길이 계산하기
	int i, length = 0;
	char str[50];
	printf("\n문자열을 입력하세요 : ");
	gets_s(str);
	printf("\n입력된 문자열은 \n \"");// \" 은 따옴표를 나타냅니다
		for (i = 0; str[i]; i++) { //문자열의 길이에 따라 반복하면서 문자열을 하나씩 출력하고 길이변수에 1씩 더함
			printf("%c", str[i]); //입력한 문자열 출력
			length += 1; //문자열의 길이를 세기 위해 문자가 하나 출력될 떄마다 1이 추가됨
	}
		printf("\" \n입니다.");
		printf("\n\n입력된 문자열의 길이 = %d \n", length); //문자열의 길이 센거 출력

		getchar();


}

/*
문자열을 입력하세요 : hello

입력된 문자열은
 "hello"
입니다.

입력된 문자열의 길이 = 5
*/
