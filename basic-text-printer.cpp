#include <iostream>
using namespace std;
int main() {
	char prints[100];
	
	cout << "Q를 누를때까지 계속되는 프린트!\n"; //this will be continued until you wrote 'Q' on your console
	cout << "입력한 대로 출력할게요~\n"; //It will print as your input

	while(prints[0]!='Q'){
		cin >> prints;
		cout << prints<<endl;
	}

	return 0;
}
