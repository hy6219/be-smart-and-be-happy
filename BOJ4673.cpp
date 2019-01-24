#include <iostream>
#define N 10001
using namespace std;
int function(int n) {
	int result = n + (n / 1000) + (n % 1000) / 100 + (n % 100) / 10 + (n % 10);

	return result;
}
int main() {
	ios_base::sync_with_stdio(false);
	//색출용
	bool not_self_num[N] = { false };//셀프넘버인 경우는 false로 초기화 해놓음으로써 구분!!
	int temp = 0;
	for (int i = 1; i <= 10000; i++) {
		//마킹
		temp = function(i);
		if (temp <= N) {
			//크기가 10000까지 가능하기 때문!
			//참거짓으로 빠르게 마킹
			not_self_num[temp] = true;//셀프넘버가 아닌 경우를 마킹
			//처음에 변수에 함수값(셀프넘버x)로 저장후에 인덱스로 출력하는 방법을 선택했을 때,  셀프넘버가 아닌 경우도 필터링되는 부분이 복잡해지게 되는 듯 하여
			//불리언으로 구별하고자 하였음

		}
	}
	for (int j = 1; j <= 10000; j++) {
		if (not_self_num[j] == false) {
			//셀프넘버인 경우를 출력!!
			cout << j << "\n";
		}
	}


	return 0;
}
