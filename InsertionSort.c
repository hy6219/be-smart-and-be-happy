#include <stdio.h>

void InsertionSort(int arr[],int size)
{
	int i = 0;
	int j = 0;
	
	int temp = 0;

	/*
	2개, 3개, ..., (size-1)개, size 개 ==>비교 대상 범주
	-->비교 횟수 큰 틀: (size-1)회
	*/
	for (i = 1; i < size; i++)
	{
		/*
		2개 비교 시에는 인덱스1부터 비교하기 때문에 1부터 size-1까지 반복
		*/

		//범주에서 맨 마지막 카드와 비교
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			/*
			point a
			5,1,3 인 배열 가정
			i=1
			-->temp=1 ,j=0------>5 5 3 temp =1
			*/
			j--;
		}
		//point a
		//마지막 카드 위치 조정
		/*
		i=1 j=-1
		index 0위치에 넣어냐 함(2개 비교)
		1 5 3
		*/
		arr[j + 1] = temp;

		printf("rotation #%d===\n", i);
		for (j = 0; j < size; j++)
		{
			printf("arr[%d]: %d\n", j, arr[j]);
		}

	}
}

int main()
{
	int arr[6] = {6,1,3,5,4,2};

	int len = 0;

	len = sizeof(arr) / sizeof(int);

	InsertionSort(arr, len);

	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("# %d : %d\n", i, arr[i]);
	}

	printf("\n");
}
