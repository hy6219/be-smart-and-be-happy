#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> //_msize()
int main()
{
	//선언할 배열의 요소 크기를 기술하지 않았지만 초깃값을 기준으로 자동으로 크기가 결정됨(NULL문자 저장될 크기 포함)
	char szBuffer[] = { "Hello" };

	//"Hello" 문자열이 저장된 메모리의 주소로 초기화되는 포인터 변수
	char *pszBuffer = "Hello";

	//동적 할당한 메모리의 주소가 저장될 포인터 선언 및 정의
	char *pszData = NULL;
	pszData = (char *)malloc(sizeof(char)*6);
	memset(pszData, NULL, sizeof(char) * 6);

	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0';

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);
	printf("%d\n",_msize(pszData));

	free(pszData);


	return 0;
}
