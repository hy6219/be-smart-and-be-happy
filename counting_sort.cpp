#include <iostream>
using namespace std;
/*
counting sort algorithm study!!
step1.count when A[i] appears..!(how many times A[i] was appeared..!)
step2.accumulation about count[i]
step3.start n-1 ->end 0 && locate array_temp[count[A[i]]-1]=A[i]; &&count[A[i]]--;
step4. copy temp array to A[]
*/
void counting_sort(int A[],int n,int temp[])
{
	int count[101];
	//int temp[101];
	//step 0. very important!! initializing
	for (int i=0;i<n;i++)
	{
		count[i] = 0;
	}
	//출현 횟수 세기
  //step1
	for (int i=0;i<n;i++)
	{
		count[A[i]]++;
		//풀어서 쓰려면 임시배열하나를 더 만들어서 거기에 원래 배열을 넣고서 비교하는 방법도!
	}
//step2
	//누적합
	//여기가 인덱스가 제일 중요..!
	for (int i=1;i<n;i++)
	{
		count[i]=count[i-1]+count[i];
	}
  //step3. don't mind 0->n-1 but I used n-1->0 for stability
	//거꾸로 가면서 정렬
	for (int i=n-1;i>=0;i--)
	{
		temp[count[A[i]]-1]=A[i];
		count[A[i]]--;
	}

//step4
	for (int i=0;i<n;i++)
	{
		A[i] = temp[i];
	}
}
////////////////////////end func
///////////////////////start main func!
int main()
{
	int N;
	int arr[101];
	int B[101] = {0};
	cin >> N;
	for (int i=0;i<N;i++)
	{
		cin >> arr[i];
	}
	counting_sort(arr,N,B);
	for (int j=0;j<N;j++)
	{
		cout << arr[j] << " ";
	}
	cout << endl;
	return 0;
}
