#include <stdio.h>
#include <stdlib.h> //메모리 동적할당 및 해제를 위한 함수가 들어간 헤더파일
//system()도 들어가 있음
//#include <limits.h> : 데이터형별 한계를 알 수 있는 헤더

int main()
{
	int *pList = NULL;

	//12바이트(sizeof(int)*3) 메모리를 동적 할당하고 시작 주소를 pList 포인터 변수에 저장
	pList = (int*)malloc(sizeof(int) * 3);

	//동적 할당한 대상 메모리를 배열 연산자로 접근
	for (int i = 0; i < 3; i++)
	{
		//pList[i] = 10 * (++i); //: 이 경우 i 를 미리 1 증가시켜 둠으로써 작동하게 하고 싶지만
		//우측 식은 계산되어도 이미 1이 증가된 상태에서 반복문의 반복자와 얽히면서 의도했던 반복자 순서를 건너뜀
		//따라서 아래의 식처럼 수행이 보다 간결하고 명확함
		pList[i] = 10 * (i+1);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("pList[%d]: %d\t", i, pList[i]);
	}
	printf("\n");

	//메모리 해제
	free(pList);
	return 0;
}
