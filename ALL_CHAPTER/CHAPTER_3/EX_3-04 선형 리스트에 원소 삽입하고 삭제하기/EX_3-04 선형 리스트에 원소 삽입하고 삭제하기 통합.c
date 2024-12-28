
#pragma once //헤더의 중복선언 방지
#define MAX 10 //상수 선언 //MAX는 전역변수임

#include <stdio.h>

//원소 삽입
int insertElement(int L[], int n, int x) {
    int i, k = 0, move = 0; //move는 자리 이동 횟수 카운터

    //원소의 크기를 비교하여 삽입 위치 k 찾기
    for (i = 0; i < n; i++) {
        if (L[i] <= x && x <= L[i + 1]) { //i번째보다 크거나 같고, i+1번째보다 작거나 같을때 i+1자리로 
            //삽입 위치 k를 i+1로 지정하고 탈출
            k = i + 1;
            break;
        }
    }
    if (i == n) k = n; //삽입 원소가 가장 큰 원소일 경우 k를 제일 큰 자리인 n번째로 지정

    //마지막 원소부터 k+1 원소까지 뒤로 자리 이동
    for (i = n; i > k; i--) { //i를 n으로 지정하고 1씩 감소하며 k번째까지 감소시킴
        L[i] = L[i - 1]; //i 번째 자리에 i-1인 바로 앞번째 자리의 값을 넣어 한칸씩 원소를 이동시킴
        move++; // 움직인 횟수 카운트
    }
    L[k] = x; //자리 이동하고 나온 삽입 위치 k에 삽입 원소 x를 저장함
    return move; //움직임 횟수 반환
}

//원소 삭제
int deleteElement(int L[], int n, int x) {
    int i, k = n, move = 0; //move는 자리 이동 횟수 카운터

    //원소 크기 비교하여 삭제 위치 k 찾기
    for (i = 0; i < n; i++) {
        //i번째 있는 값이 x값과 같다면 삭제 위치 k는 i로 지정함
        if (L[i] == x) {
            k = i;
            break;
        }
    }

    if (i == n) move = n; //삽입할 위치가 없을때 , 즉 x의 값이 선형리스트 L의 원소에 없을때

    //k+1부터 마지막 원소까지 앞으로 자리 이동
    for (i = k; i < n - 1; i++) { //k+1부터 n-1(마지막 원소자리)까지 증가함
        L[i] = L[i + 1]; //i번째 자리에 i+1(뒷 원소 자리)의 원소값을 삽입하여 덮어씌움.
        move++; //카운트
    }
    return move;
}

int main() {
    //원소 초기화 (max는 10)
    int list[MAX] = { 10, 20, 40, 50, 60, 70 };
    //변수 초기화
    int i, move, size = 6; //size는 리스트에 있는 원소의 개수

    printf("\n삽입 전 선형 리스트: ");
    //리스트 출력
    for (i = 0; i < size; i++) printf("%3d ", list[i]);
    //원소 개수 출력
    printf("\n원소의 갯수 : %d \n", size);

    //30값 list에 삽입
    move = insertElement(list, size, 30); //배열, 원소 개수, 30값 삽입

    //삽입 후 리스트 출력
    printf("\n삽입 후 선형 리스트: ");
    for (i = 0; i <= size; i++) printf("%3d ", list[i]); //i <= size 에서 size가 증가되었으니 <=를 씀
    //원소 갯수 하나 증가해서 출력
    printf("\n원소의 갯수 : %d ", ++size);
    //자리 이동 횟수 출력
    printf("\n자리 이동 횟수 : %d \n", move);

    //30값 삭제
    move = deleteElement(list, size, 30);

    //삭제할 값의 원소가 없는 경우
    if (move == size) printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다 \n");
    //삭제할 원소가 있는 경우
    else {
        //삭제 후 리스트 출력
        printf("\n삭제 후 선형 리스트 : ");
        for (i = 0; i < size - 1; i++) printf("%3d ", list[i]); //i < size - 1는 위에서 ++size를 했기 때문에 size-1를 하고 <를 씀
        //사이즈 하나 감소시키고 출력
        printf("\n원소의 갯수 : %d ", --size);
        //자리 이동횟수 출력
        printf("\n자리 이동 횟수 : %d \n", move);
    }

    getchar();
    return 0;
}
/*
삽입 전 선형 리스트:  10  20  40  50  60  70
원소의 갯수 : 6

삽입 후 선형 리스트:  10  20  30  40  50  60  70
원소의 갯수 : 7
자리 이동 횟수 : 4

삭제 후 선형 리스트 :  10  20  40  50  60  70
원소의 갯수 : 6
자리 이동 횟수 : 4
*/
