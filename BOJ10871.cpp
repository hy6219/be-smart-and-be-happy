#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, X;
	int arr[10001] = {0};

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] < X) {
			cout << arr[i] << " ";
		}
	}
	cout << "\n";
	return 0;
}
