#include <stdio.h>

void main()
{
	// ���ؼ�

	int num1,num2;

	int str[4];

	str[2]=6;
	str[3]=-2;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d",&num1);

	num1=str[num1];

	printf("�� �Է� : ");
	scanf("%d",&num2);

	num2=num2+num1;

	printf("10���� ==> %d \n",num2);
	printf("16���� ==> %X \n",num2);
	printf("8���� ==> %o \n",num2);
}
