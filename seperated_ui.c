#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//인터페이스와 내부기능을 분리
//계산된 학점을 입력받는 인터페이스
int GetResult()
{
	int nResult = 0;
	printf("성적(0~100)을 입력하세요: ");
	scanf("%d",&nResult);
	return nResult;
}
//학점을 계산하는 내부 기능
char score(int param)
{
	if (param >= 90)
	{
		return 'A';
	}
	else if (param>=80)
	{
		return 'B';
	}
	else if (param>=70)
	{
		return 'C';
	}
	else if (param>=60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}
int main()
{
	int result = GetResult();
	char level = score(result);

	printf("%d score, %c grade\n",result,level);
	return 0;
}
