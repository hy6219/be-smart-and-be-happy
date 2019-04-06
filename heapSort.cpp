#include <iostream>
using namespace std;

void heapify(int A[],int level, int size)
{
	//자식노드
	int left_index = 2 * level;
	int right_index = 2*level + 1;
	//작은값
	int smaller;
	//swap
	int temp;

	if (right_index<size)
	{
		//마지막 레벨의 노드 개수가 짝수인 경우
		if (A[left_index]<A[right_index])
		{
			smaller = left_index;
		}
		else
		{
			smaller = right_index;
		}
	}
	else if (left_index<size)
	{
		//마지막 레벨의 노드 개수가 홀수인 경우
		smaller = left_index;
	}
	else
	{
		//A[k]가 리프노드인 경우, 우리의 목적은 이 원소를 루트노드로 만들고자 함이므로 그냥 점프!
		return;
	}
	//재귀적 조정
	if (A[smaller]<A[level])
	{
		temp = A[smaller];
		A[smaller] = A[level];
		A[level] = temp;
		heapify(A,smaller,size);
	}
}
void buildHeap(int A[], int n)
{
	for (int i = (n / 2); i >0; i--)
	{
		heapify(A, i, n);
	}
}

void heapSort(int A[], int n)
{
	int swap;
	buildHeap(A,n);
	for (int i=n-1;i>0;i--)
	{
		
		//힙에서 맨 마지막 레벨부터 제거
		swap = A[i];
		A[i] = A[0];
		A[0] = swap;
		//i는 인덱스고, heapify의 마지막 파라미터는 배열의 크기이기 때문에 i+1..!!
		heapify(A,0,i+1);
	}
}
int main()
{
	int N;
	int arr[1001];

	cin >> N;

	for (int i=0;i<N;i++)
	{
		cin >> arr[i];
	}

	heapSort(arr,N);

	for (int i=0;i<N;i++)
	{
		cout << arr[i]<<" ";
	}

	cout << endl;
	return 0;
}
