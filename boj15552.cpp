/*
본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면
여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과
sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.
단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식
을 사용하면 안 된다.
입력
첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는
각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
출력
각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.
예제 입력 1
5
1 1
12 34
5 500
40 60
1000 1000
예제 출력 1
2
46
505
100
2000
*/
#include <iostream>
using namespace std;
int main() {
std::ios_base::sync_with_stdio(false); // C 및 C ++ 표준 스트림 간의 동기화
가 비활성화
cin.tie(NULL);
int T=0;
int A;
int B;
int val;
//테스트케이스 개수 입력받음
cin >> T;
//A,B 세트 값 입력받음
for (int i = 0; i < T; i++) {
cin >> A >> B;
val = A + B;
cout << val << "\n";
}
return 0;
}
