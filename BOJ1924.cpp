#include <cstdio>
int main() {
	int x, y;
	int year[13][32] = {0};
	int day[7] = { 0 };

	//연 정보 넣기
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 32; j++) {

				if ((i == 0)&&(j<=30)) {
					//1월
					year[i][j] = j + 1;
				}
				if ((i == 1) && (j <= 28)) {
					//2월=1월 마지막값+j+1
					year[i][j] = year[0][30] + j + 1;
				}
				if ((i == 2) && (j <= 30)) {
					//3월=2월 마지막 값+j+1
					year[i][j] = year[1][27] + j + 1;
				}
				if ((i == 3) && (j <= 29)) {
					//4월=3월 마지막값+j+1
					year[i][j] = year[2][30] + j + 1;
				}
				if ((i == 4) && (j <= 30)) {
					//5월=4월 마지막값+j+1
					year[i][j] = year[3][29] + j + 1;
				}
				if ((i == 5) && (j <= 29)) {
					//6월=5월 마지막값+j+1
					year[i][j] = year[4][30] + j + 1;
				}
				if ((i == 6) && (j <= 30)) {
					//7월=6월 마지막값+j+1
					year[i][j] = year[5][29] + j + 1;
				}
				if ((i == 7) && (j <= 30)) {
					//8월=7월 마지막값+j+1
					year[i][j] = year[6][30] + j + 1;
				}
				if ((i == 8) && (j <= 29)) {
					//9월=8월+j+1
					year[i][j] = year[7][30] + j + 1;
				}
				if ((i == 9) && (j <= 30)) {
					//10월=9월 마지막값+j+1
					year[i][j] = year[8][29] + j + 1;
				}
				if ((i == 10) && (j <= 29)) {
					//11월=10월+j+1
					year[i][j] = year[9][30] + j + 1;
				}
				if ((i == 11) && (j <= 30)) {
					//12월=11월 마지막값+j+1
					year[i][j] = year[10][29] + j + 1;
				}
		}
	}
	//============
	scanf_s("%d %d", &x, &y);
	int month = x - 1;
	int dd = y - 1;
	int info;
	info = year[month][dd];
	//좌표에서 값 읽어서 넣기

	int diff = info - year[0][0];
	int how_d;//나머지로 요일 정보 알아내기
	how_d = diff % 7;
	if (how_d == 0) {
		printf("MON\n");
	}
	else if (how_d == 1) {
		printf("TUE\n");
	}
	else if (how_d == 2) {
		printf("WED\n");
	}
	else if (how_d == 3) {
		printf("THU\n");
	}
	else if (how_d == 4) {
		printf("FRI\n");
	}
	else if (how_d == 5) {
		printf("SAT\n");
	}
	else if (how_d == 6) {
		printf("SUN\n");
	}
	return 0;
}
