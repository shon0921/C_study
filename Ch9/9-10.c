#include <stdio.h>

void main()
{
	int a, b;

	printf("a �� �Է� : ");
	scanf("%d",&a);
	printf("b �� �Է� : ");
	scanf("%d",&b);

	int *p1 = &a;
	int *p2 = &b;

	int tmp = *p1;
	*p1=*p2;
	*p2=tmp;

	printf("�ٲ� �� a�� %d, b�� %d",a,b);
	
}
