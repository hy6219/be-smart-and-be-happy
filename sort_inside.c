/*
문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.

예제 입력 1
2143
예제 출력 1
4321
*/
#define MAX 100001
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.각자리수 구하기
//2.sorting
int digit(int number)
{
	int index = 0;
	while (number>0)
	{
		index++;
		number /= 10;
	}
	return index;
}

void selection(int num, int n)
{
	int A[MAX] = { 0 };

	int index = 0;
	int max_index = 0;
	int temp = 0;
	//1.
	while (index != n)
	{
		A[index] = num % 10;
		num /= 10;
		index++;
	}
	//2.내림차순 소팅
	for (int i=0;i<n-1;i++)
	{
		max_index = i;
		for (int j=i+1;j<n;j++)
		{
			if (A[j]>A[max_index])
			{
				max_index = j;
			}
		}
		temp = A[i];
		A[i] = A[max_index];
		A[max_index] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", A[i]);
	}
	printf("\n");
}

int main()
{
	int num = 0;
	int line;
	scanf("%d%*c", &num);

	line = digit(num);

	selection(num, line);

	return 0;
}
