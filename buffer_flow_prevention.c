#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*int test = 0;

	scanf("Input: %d", &test);
	printf("Input: %d\n",test);
*/
	//scan two continuous values
	int a = 0;
	int b = 0;

	printf("두 정수를 입력해주세요.: ");
	scanf("%d%d",&a,&b);

	printf("a=%d, b=%d\n",a,b);

	scanf("%2d%2d",&a,&b);
	printf("띄어져 있지 않은 입력에서 두자리씩 읽기: a= %d, b= %d\n",a,b);

	//////////////	%*c : 배열의 요소 중 문자가 섞인 것을 인식
	//1
	char time[11] = { " " };
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%*c%d%*c%d",&year,&month,&day);
	printf("Today is %4d year %02d month %02d day\n",year,month,day);

	//2 %*c가 필요한 또다른 이유-버퍼 오버플로우
	int num = 0;
	char c = ' ';
	printf("숫자를 하나 입력해주세욤: ");
	scanf("%d", &num);

	printf("문자 하나를 입력해주세욤: ");
	scanf("%c",&c);

	printf("num=%d, c=%c\n",num,c);

	//sol

	printf("숫자를 하나 입력해주세욤: ");
	scanf("%d", &num);

	printf("문자 하나를 입력해주세욤: ");
	scanf("%*c%c", &c);

	printf("num=%d, c=%c\n", num, c);
	return 0;
}
