#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000001
#include <stdio.h>

void words(char str[],int size)
{
	int blank=1;

	for (int i=0;i<size;i++)
	{
		if (str[i]==' ')
		{
			blank++;	
			//공백이 연속으로 나오는 경우는 없다고 함!			
		}
	}
	//for문에서 다 카운팅한 후에 앞뒤 공백을 고려!
	if (str[0] == ' ')
	{
		//처음이 공백인데 세어진 경우
		blank--;
	}
	if (str[size - 1] == ' ')
	{
		//마지막이 공백인데 세어진 경우
		blank--;
	}

	printf("%d\n",blank);
}

int main()
{
	char str[MAX] = {' '}; //매크로도 좋지만 폭을 수치로 확정시켜주어서 인식을 할 수 있도록!
	int size = 0;
	int idx = 0;

	//중요한 keypoint!!!
	//scanf로 입력을 받을 경우 읽어들여올 때 %*c혹은 %*s처리를 해도 공백이 있으면
	//그 뒤읭 문자를 읽지 못하는 문제점이 존재!
	//이 경우 gets 및 fgets 함수로 해결이 가능!
	//gets와 fgets모두 \n를 만날때까지 문자입력을 읽어들일 수 있지만
	//fgets는 저장된 문자열에 \n을 포함시킴!



	//그 외에도 scanf는 폭을 확실히 정해주지 않으면 혼동이 올 수 있음으로 인하여 버퍼 오버플로우 문제가
	//발생할 수 있다고 함!
	gets_s(str,MAX);
	
	//scanf("%s",&str);

	while (str[idx]!='\0')
	{
		size++;
		idx++;
	}
	words(str,size);
	return 0;
}
