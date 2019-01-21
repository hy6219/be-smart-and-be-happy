#include <iostream>
using namespace std;
int sum_to_num(int num) {
	int sum = (num*(num + 1)) / 2;
	return sum;
}
int main() {
	int N;
	cin >> N;
	int result = sum_to_num(N);
	cout << result << endl;
	return 0;
}
