/*BaekJun Online Judge No.2440
I considered the start number like (0,0)
In every rows, there will be * from 0 to N-i-1
that's the way I thought in this problem!
*/
#include <cstdio>
int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <=(N - i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
