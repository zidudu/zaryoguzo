#include <stdio.h>

void hanoi(int n, int start, int work, int target);
void main() {
	hanoi(3, 'A', 'B', 'C');
	getchar();
}

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);

	}
	else {
		hanoi(n - 1, start, target, work);
		printf(" %c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}

/*
A에서 원반 1를(을) C로 옮김
 A에서 원반 2를(을) B로 옮김
 C에서 원반 1를(을) B로 옮김
 A에서 원반 3를(을) C로 옮김
 B에서 원반 1를(을) A로 옮김
 B에서 원반 2를(을) C로 옮김
 A에서 원반 1를(을) C로 옮김
*/
