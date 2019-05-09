#include <stdio.h>
#include <string.h>
int main()
{
	char szBuffer[12] = { "TestString" };
	char *pszData = "TestString";

	//문자열이 저장된 메모리의 위치가 같은지 비교
	printf("%d\n",szBuffer==pszData);
	printf("%d\n","TestString"== pszData);
	printf("%d\n", "DataString" == "TestString");

	//두 문자열이 같은지 비교
	printf("%d\n", memcmp(szBuffer,pszData,12));
	printf("%d\n", memcmp("Helloworld!", pszData, 12));
	printf("%d\n", memcmp("helloworld!", pszData, 12));

	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("Helloworld!", pszData));
	printf("%d\n", strcmp("Test", pszData));
	printf("%d\n", strncmp(szBuffer, pszData, 12));

	char text[32] = { "Be The Best Programmer." };

	printf("1.text의 주소: %p\n",text);

	printf("2.첫번째 Be 시작 위치: %p\n",strstr(text,"Be"));

	/*
	한 문자열 내에 특정 문자열이 여러 번 반복될 경우,
	포인터를 이용해서 인덱스를 1씩 증가시키면서 주소를 출력하기
	*/

	char *check = strstr(text,"Be");
	int turn = 1;
	while (check!='\0')
	{
		printf("%d th turn: %p\n", turn,check);
		printf("%d th turn: %s\n", turn,check);
		check = strstr(check+1,"Be");
		turn++;
	}

	return 0;
}
