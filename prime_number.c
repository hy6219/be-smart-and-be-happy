#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//user interface-keyboard input
int input()
{
	int param = 0;
	printf("1~10사이의 자연수를 입력해주세요\n");
	scanf("%d%*c", &param);

	return param;
}
//internal func-check whether x is prime number or not
bool sosu(int param)
{
	bool check = false;
	int size = 0;
	for (int i=1;i<=param;i++)
	{
		if (param%i==0)
		{
			++size;
		}
	}

	if (size==2)
	{
		check = true;
	}

	return check;

}
int main()
{
	/*소수구하는 프로그램
	소수: 약수가 1과 자기 자신뿐이어야 하는 것!
	*/

	int num = input();

	bool isit_sosu = sosu(num);

	if (isit_sosu==true)
	{
		printf("소수가 맞습니다!\n");
	}
	else
	{
		printf("소수가 아니네요!\n");
	}
	return 0;
}
