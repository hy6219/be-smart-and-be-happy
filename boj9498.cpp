#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int score;
	char level;
	cin >> score;
	if (score >= 90) {
		level = 'A';
	}
	else if (score >= 80) {
		level = 'B';
	}
	else if (score >= 70) {
		level = 'C';
	}
	else if (score >= 60) {
		level = 'D';
	}
	else {
		level = 'F';
	}
	cout << level << "\n";
  return 0;
}
