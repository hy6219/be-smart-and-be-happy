#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int N=0;
	int sum = 0;	
	cin >> N;
	char num[101];
	char con[2];
	int temp=0;

	//num배열에 char로 입력받기
	cin >> num;
	//입력받은 배열 중에서 숫자하나씩 뽑아서 con(container)배열에 보관하기
	for (int i = 0; i < N; i++) {
		con[0] = num[i];
		temp = atoi(con);//숫자 하나 뽑아서 저장하기 완료!
		//바로바로 더하기!
		sum += temp;
	}
	cout << sum << endl;
}
/*
Problem-
input: N(the number of input)
       components that is added
output: sum of components

ex-input: 5
          54321
          output-15
          https://www.acmicpc.net/problem/11720
Share more different idea with me!          
*/
