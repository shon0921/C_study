#include <stdio.h>

void main()
{
	// 손해성

	int num1,num2;

	int str[4];

	str[2]=6;
	str[3]=-2;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d",&num1);

	num1=str[num1];

	printf("값 입력 : ");
	scanf("%d",&num2);

	num2=num2+num1;

	printf("10진수 ==> %d \n",num2);
	printf("16진수 ==> %X \n",num2);
	printf("8진수 ==> %o \n",num2);
}
