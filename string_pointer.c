#include <stdio.h>

int main()
{
	char szBuffer[16] = { "Hello" };
	char *pszData = szBuffer;
	int length = 0;

	//문자열의 길이를 알아내기 위해 null문자가 저장된 위치 찾기
	while (*pszData!='\0')
	{
		pszData++;
	}
	//pszData가 \0이 되면, pszData=='\0'인 인덱스에서 그냥 szBuffer[0]같은 것도 아니고
	//szBuffer는 처음 시작 주소를 의미하므로
	//널문자가 있는 주소-처음 시작 주소 ==문자열 길이 가 될 수 있음

	length = pszData - szBuffer;
	printf("Length: %d\n",length);
	return 0;
}
