#include <iostream>
using namespace std;

void selection_sort(int A[],int n)
{
	int last = A[n - 1];
	int max;
	int temp;

	//최대값 찾기 find the max value
	for (int i = 0; i < n; i++)
	{
		if (A[i] > A[i + 1])
		{
			max = A[i];
		}
		else
		{
			max = A[i + 1];
		}
		
	}
	//최댓값과 마지막 값 바꾸기 swap(max value and last value)
		temp = max;
		max = A[n - 1];
		A[n - 1] = temp;	
}
int main()
{
	int A[3] = {1,2,3};
	for (int k = 3; k < 1; k--)
	{
		selection_sort(A,k);
	}
	for (int l = 0; l < 3; l++)
	{
		cout << A[l] << " ";
		if (l == 2) {
			cout << endl;
		}
	}
	return 0;
}
