#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i=1;i<=10;i++)
	{
		sum += i;
	}

	printf("sum from 1 to 10: %d\n",sum);

	int dan = 0;

	scanf("%d%*c",&dan);

	if (dan>=2&&dan<=9)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n",dan,i,dan*i);
		}
	}
	else
	{
		printf("ERROR\n");
	}

	//직각삼각형 출력하기
	/*
		*
		**
		***
		****
		*****
		*/

	//1.사용자로부터 입력을 받아 직각삼각형 만들기! 단, 2 이상!

	int len = 0;

	printf("2이상의 수를 입력해주시면 직각삼각형을 만들어드립니다\n");
	scanf("%d%*c",&len);

	for (int i=1;i<=len;i++)
	{
		for (int j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//직각삼각형 출력하기
	/*
			*
		   **
		  ***
		 ****
		*****
		*/

	for (int i=0;i<len;i++)
	{
		for (int j=0;j<len-(i+1);j++)
		{
			printf(" ");
		}
		for (int j=len-(i+1);j<len;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//피라미드 출력하기_나의 방법
/*
		*
	   ***
	  *****
	 *******
	*********
	*/

	for (int i=0;i<len;i++)
	{
		for (int j=0;j<len-(i+1);j++)
		{
			printf(" ");
		}
		for (int j=len-(i+1);j<len;j++)
		{
			printf("*");
		}
		if (i>=1)
		{
			for (int j = len; j < (len+i); j++)
			{
				printf("*");
			}
			for (int j=len+i;j< (2 * len - 1);j++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	//피라미드 출력하기_책의 방법
/*
		*
	   ***
	  *****
	 *******
	*********
	*/

	for (int i=0;i<len;++i)
	{
		for (int j=0;j<len+i;j++)
		{
			//중간점기준으로 출력
			if (i + j >= (len - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
