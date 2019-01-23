#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int C, N;
	double score[1001] = { 0 };
	double sum;
	double avg ;
	int num;
	double percentage ;

	cin >> C;
	
	for (int i = 0; i < C; i++) {
		num = 0;
		sum = 0;
		avg = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			sum += score[j];
			avg = sum / N;
		}
		for (int k = 0; k < N; k++) {
			if (score[k] > avg) {
				num++;
			}			
		}
		percentage = (((double)num) / ((double)N)) * 100;
		cout << fixed; //.00도 출력되게 함
		cout.precision(3);
		cout << percentage << "%" << "\n";
	}
	return 0;
}
