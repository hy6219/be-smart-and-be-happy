#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	float arr[1001] = { 0 };

	cin >> N;


	float max=0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < N; j++) {
		if (max<arr[j]) {
			max = arr[j];
		}
	}
	float sum = 0;
	float avg=0;
	for (int k = 0; k < N; k++) {
		arr[k] = ((arr[k] / max) * 100);
		sum += arr[k];
		avg = sum / N;

	}
	cout << fixed;
	cout.precision(2);
	cout << avg << "\n";
	return 0;
}
