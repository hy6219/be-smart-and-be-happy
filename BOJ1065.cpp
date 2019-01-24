#include <iostream>
using namespace std;
bool hansu(int x) {
	int fir = x / 100;
	int sec = (x % 100) / 10;
	int thi = (x % 10);

	int s_f = sec - fir;
	int t_s = thi - sec;
	bool hansu = false;
	//한자리 수, 두자리 수는 무조건 등차수열이 됨!!
	if (x < 100) {
		hansu = true;
	}
	else {
		if (s_f == t_s) {
			hansu = true;
		}
		else {
			hansu = false;
		}
	}
	return hansu;
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	int size=0;
	
	
	cin >> N;
	bool isit[1000];
	for (int i = 1; i <= N; i++) {
		isit[i] = hansu(i);
	}
	//핵심
	for (int j = 1; j <= N; j++) {
		if (isit[j] == true) {
			size++;
		}

	}
	cout << size << "\n";
	return 0;
}
