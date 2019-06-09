#include <iostream>
using namespace std;

/*
2 1 4 5 3
1)2,1 -->1 2 4 5 3
  2,4 -->1 2 4 5 3
  4,5 -->1 2 4 5 3
  5,3 -->1 2 4 3 5
2)1,2 -->1 2 4 3 5
  2,4 -->1 2 4 3 5
  4,3 -->1 2 3 4 5
3)1,2 -->1 2 3 4 5
  2,3 -->1 2 3 4 5
4)1,2 -->1 2 3 4 5


  ...........x회전에서는 0~(n-1)-i까지 비교..!
  주의..! n-1번 비교..!
*/
void bubble(int A[],int n)
{
	int temp = 0;

	//다음 원소와 비교하기 위함!
	for (int i=n-1;i>=1;i--)
	{	
		for (int j=0;j<i;j++)
		{
			//다음원소와 비교하기 위해서는 <i+1이 아닌 <i이어야 함!
			if (A[j]>A[j+1])
			{
				temp = A[j+1];
				A[j + 1] = A[j];
				A[j] = temp;
			}

		}
	}

	cout << "#Completed!" << "\n";

	for (int l=0;l<n;l++)
	{
		cout << A[l] << "\n";
	}
}

int main()
{
	int N;
	int arr[10] = { 0 };

	cin >> N;

	for (int i=0;i<N;i++)
	{
		cin >> arr[i];
	}

	bubble(arr,N);
	
	return 0;
}
