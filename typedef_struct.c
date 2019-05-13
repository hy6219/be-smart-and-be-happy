//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char *t1 = "Hello, World!";
//	char *t2 = "Hello, World!";
//
//	if (strcmp(t1,t2)) //이것은 이것과 같다! strcmp(t1,t2)==true(1) 그런데 strcmp(t1,t2)==0<=>false이므로 "Unequal!"출력!
//	{
//		printf("Equal!\n");
//	}
//	else
//	{
//		printf("Unequal!\n");
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//구조체 변수는 배열명과 달리 l-value가 될 수 있음
//함수가 구조체를 반환한다면 이를 r-value로 사용하여 대입 연산도 할 수 있음

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];

}USERDATA;

//구조체 형식을 반환하는 함수 선언 및 정의
USERDATA GetUserData()
{
	USERDATA user = { 0 };

	//자료형==구조체==USERDATA
	//포인터일때만 ->
	printf("연령: ");
	scanf("%d%*c",&user.nAge); //%*c%d로 하면 두 자리 숫자가 들어오면 잘림
	printf("이름: ");
	gets_s(user.szName,sizeof(user.szName));
	printf("연락처: ");
	gets_s(user.szPhone,sizeof(user.szPhone));
	return user;

}
int main()
{
	USERDATA user = { 0 };

	user = GetUserData();
	printf("사용자 정보: %d세\t, 이름: %s\t, 연락처:%s\n",user.nAge,user.szName,user.szPhone);

	return 0;
}
