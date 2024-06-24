#include <stdio.h>

void main()
{
	int a,b;

	printf("a 값 입력 : ");
	scanf("%d",&a);
	printf("b 값 입력 : ");
	scanf("%d",&b);

	int *p1=&a;
	int *p2=&b;

	int temp = *p1;
	*p1=*p2;
	*p2=temp;

	printf("바뀐 값 a는 %d, b는 %d",a,b);
}

