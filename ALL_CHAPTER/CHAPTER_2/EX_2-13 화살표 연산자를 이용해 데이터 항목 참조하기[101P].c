#include <stdio.h>
#include <string.h>
struct employee {
	char name[10];
	int year;
	int pay;
};
int main() {
	struct employee Lee;
	struct employee *Sptr=&Lee; //포인터 객체 sptr은 객체 Lee의 주소 가리킴
	strcpy(Sptr->name, "이순신"); //sptr포인터가 name지역변수의 데이터 항목을 지정해 "이순신"이라는 값을 복사함
	Sptr->year = 2023; //year변수의 데이터 항목을 지정
	Sptr->pay = 6900;

	printf("\n 이름 : %s", Sptr->name);
	printf("\n 입사 : %d", Sptr->year);
	printf("\n 연봉 : %d", Sptr->pay);

}
