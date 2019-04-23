/*사용자로부터 정수로 초를 입력받아 시:분:초 형식으로 출력하는 프로그램
  시,분,초는 각각 모두 2자리 정수로 표시되어야 하며 한 자리 숫자인 경우 
  앞에 0을 붙여서 출력*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec = 0;
	int p_hour = 0;
	int p_min = 0;
	int p_sec = 0;

	printf("경과한 초(sec)를 입력해주세요: ");
	scanf("%d%*c",&sec);
	//1시간=60분=60*60초=3600초
	p_hour = sec / 3600;
	sec = sec - p_hour * 3600;
	p_min = sec / 60;
	p_sec = sec - p_min*60;

	printf("%02d:%02d:%02d\n",p_hour,p_min,p_sec);

	return 0;
}
