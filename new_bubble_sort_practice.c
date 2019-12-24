#include <stdio.h>

void BubbleSort(int arr[],int size)
{
	int i = 0;
	int j = 0;
	int max = 0;
	int temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		//최댓값을 찾는 작업 한 단계 수행을 n-1 번 수행
		for (j = 0; j < size - (i+1); j++)
		{
			/*j원소와 j+1원소 비교
			i=0; 0...size-2
			i=1;0...size-3
			i=2;0...size-4
			
			=====>j<size-(i+1)
			*/
			if (arr[j] > arr[j + 1])
			{
				max = arr[j];
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 7,10,5,6,1,3,2,9,4,8 };

	int len = 0;

	len = sizeof(arr) / sizeof(int);

	BubbleSort(arr, len);

	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("# %d : %d\n", i, arr[i]);
	}

	printf("\n");
}
