#include <stdio.h>
// ���ؼ�
void main()
{
	int a;
	int b,c,d;

	printf ("�⵵�� �Է��ϼ���. : ");
	scanf("%d",&a);
	b = a%4;
	c = a%100;
	d = a%400;

	if ((b == 0 && c != 0) || d == 0 )
	{
		printf ("%d ���� �����Դϴ�.",a);
	}
	else
	{
		printf ("%d ���� ������ �ƴմϴ�.",a);
	}
}
	
