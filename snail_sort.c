#include <stdio.h>
//#include <stdbool.h>
int main()
{
	/*
	부딪혀서 꺾여지는 인덱스에 집중
	꺾이는 인덱스는 4개!
	1)오른쪽 위2)오른쪽 아래3)왼쪽 위 4)왼쪽 아래
	1)(0,4) (1,3) -방향:열이 움직이다가>행이 움직임
	2)(4,4)(3,3)-방향: 행>-열
	3)(1,0)(2,1)-방향:열>-행
	4)(4,0)(3,1)-방향: 행>열
	*/
	int aList[5][5] = {0};
	//증가시켜갈 수치값
	int k = 1;
	//행
	int row = 0;
	//열
	int col = -1;
	//switch
	int toggle = 1;
	//반복횟수
	int n = 5;
	////x번째 회전 인식
	//int turn = 0;
	while (n>0)
	{
		//행고정, 열이동
		//n번 수행
		//col = col - 1;
		/*turn++;*/
		for (int i=0;i<n;i++)
		{
			col += toggle;
			aList[row][col] = k++;//이번 수행 후 다음에 자동으로 1증가
		}
		//행고정 수행 이후에는 항상 반복횟수가 감소됨!
		n = n - 1;
		//열고정, 행이동
		//n번 수행
		/*turn++;*/
		for (int i=0;i<n;i++)
		{
			/*1회전때 col이 많아져서 이것을 처리하려고 생각했던..turn...........
			if (turn ==2&&col==5)
			{
				col--;
			}*/
			row += toggle;
			aList[row][col] = k++;
			
		}
		toggle *= (-1);
		
	}
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("%d\t",aList[i][j]);
		}
		printf("\n");
	}


		return 0;
	
}
