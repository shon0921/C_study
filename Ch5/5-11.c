#include <stdio.h>

void main()
{
	int num1,num2,result;
	char m;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d",&num1,&m,&num2);

	switch(m)
	{
		case '+':
		result = num1+num2;
		printf("%d + %d = %d �Դϴ�.",num1,num2,result);
		break;

		case '-':
		result = num1-num2;
		printf("%d - %d = %d �Դϴ�.",num1,num2,result);
		break;

		case '*':
		result = num1*num2;
		printf("%d * %d = %d �Դϴ�.",num1,num2,result);
		break;

		case '/':
		result = num1/num2;
		printf("%d / %d = %d �Դϴ�.",num1,num2,result);
		break;

		case '%':
		result = num1%num2;
		printf("%d %c %d = %d �Դϴ�.",num1,m,num2,result);
		break;

		default :
		printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	}
}

