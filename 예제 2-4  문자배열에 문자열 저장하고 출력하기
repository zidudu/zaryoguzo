#include <iostream>
#include <stdio.h>
//문자열: 문자를 나열한 것 //""로 표시
//문자열을 저장하려면 문자열을 구성하는 문자를 연속해서 저장해야 하므로 배열을 사용함
//char s2[10]="string";  이렇게 하면 문자열의 끝을 나타내는 \0(NULL)이 마지막에 추가되서 실제 문자열 크기보다 1바이트 큼
//char s2[10]={'s','t','r','i','n','g'} 이렇게 쓰면 \0이 안생김 
using namespace std;
int main(){ 

	//예제 2-4 75p 문자 배열에 문자열 저장하고 출력
	char str[20] = "Data Structure!"; //끝에 \0가 생김
	int i;
	printf("\n문자 배열 str[] : ");
	for (i = 0; str[i]; i++) { //\0까지 출력함// NULL이 올땐 FALSE가 되서 끝남//문자열 만큼 반복 즉 20번 반복
		printf("%c", str[i]); //캐릭터 자료형을 출력 //str요소를 하나씩 출력한다
	}
	getchar();
}

//문자 배열 str[] : Data Structure!
