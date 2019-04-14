#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Let's make basic program that prints the binary value from your input!(decimal input!)
while loop: when input>0, store the remain value
for loop: print from index 7 because I supposed 8bit value!*/

int main()
{
	int input;
	scanf("%d",&input);
	int result[8] = {0};
	int i = 0;
	while (input>0)
	{
		result[i] = input % 2;
		input = input / 2;
		i++;
	}
	for (int i=7;i>=0;i--)
	{
		printf("%d",result[i]);
	}
	printf("\n");
	return 0;

}
