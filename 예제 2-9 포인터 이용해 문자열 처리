#include <stdio.h>
int main() {
	int i;
	//char형 배열에 문자 넣음 //끝에는 \0이 붙음
	char string1[20] = "Dreams come true!"; //17글자+\0이니 18글자
	char string2[20], * ptr1, * ptr2;
	ptr1 = string1;
	printf("\n string1의 주소 %u \t ptr1 = %u", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7);// come true!
	ptr2 = &string1[7]; //포인터 ptr2는 배열 string1의 8번째 요소의 주소를 가리킴
	//% s는 C 언어에서 문자열을 출력할 때 사용되는 서식 지정자(format specifier)입니다.
	printf("\n %s \n\n", ptr2);// come true! //8번째 주소를 가리키니 8번째 주소에 있는 문자부터 차례로 출력함

	for (i = 16; i >= 0; i--) { //17번 반복 
		//putchar() 함수는 C 프로그래밍 언어에서 문자를 출력하는 함수입니다. 이 함수는 한 번에 하나의 문자를 표준 출력 스트림에 출력합니다
		putchar(*(ptr1 + i)); //포인터 ptr1은 string1의 주소를 가리키는데 주소에서 16을 더했따. 즉 배열의 끝 문자부터 처음 문자까지 차례로 출력한다는 뜻이다. 
		//즉, 글자가 반대로 출력된다
	}
	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i); //포인터 ptr1에서 i를 더한 주소를 참조해서 나온 값을 string2 배열에 넣음
		//Dreams come true!이 배열에 들어가게 됨
	}
	printf("\n\n string1= %s", string1);//Dreams come true!
	printf("\n\n string2= %s", string2);//Dreams come true!

	//포인터 ptr1의 참조값인 string1의 배열 요소값을 새로 지정해서 문자열 내용을 변경함
	*ptr1 = 'P'; //첫번째 주소를 가리키는 곳에 P라는 값을 넣음
	*(ptr1+1) = 'e'; //string1의 두번째 주소 참조값에 e를 넣음
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1); //Peace come true! 가 옴. 0~4까지의 인덱스 값이 바뀌었음

	getchar();




}
