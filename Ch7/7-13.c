#include <stdio.h>

void main()
{
	int a,b,c,d;

	printf("�հ��� ���۰� ==> ");
	scanf("%d",&a);
	printf("�հ��� ���� ==> ");
	scanf("%d",&b);
	printf("��� ==> ");
	scanf("%d",&c);

	for(;a<=b;a++)
	{
		if(a%c==0)
		{
			d+=a;
		}
	}
	printf("100���� 200������ 4����� �հ� ==> %d",d);
}
