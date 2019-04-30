#include <stdio.h>
void selection(int A[],int n)
{
	int min_index = 0;
	int temp = 0;
	/*
	1.최솟값 탐색
	2.첫번째 요소부터 서서히 비교
	반복
	*/
	//최솟값과 요소 비교
	/*
	3 5 2 4 1
	1.
	1)최솟값 :1
	3,1비교
	>1 5 2 4 3
	2)최솟값(5,2,4,3 중):2
	5,2비교
	>1 2 5 4 3
	...
	*/
	//최솟값 찾기
	for (int i=0;i<n-1;i++)
	{
		min_index = i;
		//나중에는 n-2,n-1은 남아있어야짐!
		//최솟값 찾기
		for (int j=i;j<n;j++)
		{
			if (A[j]<A[min_index])
			{
				min_index = j;
			}
			//else
			//{
			//	min_index = j+1; //n-1이 최대 인덱스인데 넘어갈 위험성이 존재
			//}
		}
		//비교, 교체
		//인덱스로 최솟값에 접근하면 처음값이 최솟값보다 앞에 있거나, 뒤에 있어도 편하게 바꿀 수 있음!
    //+단순 값 교체보다 즉각적으로 처리가 가능한 장점도 있음!
	
		temp = A[min_index];
		A[min_index] = A[i];
		A[i] = temp;

	}
	
}
int main()
{
	int arr[5] = {3,5,2,4,1};
	int size = sizeof(arr) / sizeof(int);

	selection(arr,size);

	for (int i=0;i<size;i++)
	{
		printf("arr[%d]: %d\t",i,arr[i]);
	}
	printf("\n");
	
	return 0;
}
