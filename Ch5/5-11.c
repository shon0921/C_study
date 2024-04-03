#include <stdio.h>

void main()
{
	int num1,num2,result;
	char m;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d",&num1,&m,&num2);

	switch(m)
	{
		case '+':
		result = num1+num2;
		printf("%d + %d = %d 입니다.",num1,num2,result);
		break;

		case '-':
		result = num1-num2;
		printf("%d - %d = %d 입니다.",num1,num2,result);
		break;

		case '*':
		result = num1*num2;
		printf("%d * %d = %d 입니다.",num1,num2,result);
		break;

		case '/':
		result = num1/num2;
		printf("%d / %d = %d 입니다.",num1,num2,result);
		break;

		case '%':
		result = num1%num2;
		printf("%d %c %d = %d 입니다.",num1,m,num2,result);
		break;

		default :
		printf("연산자를 잘못 입력했습니다.");
	}
}

