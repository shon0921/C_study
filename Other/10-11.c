#include <stdio.h>

int gugu (int a)
{
	int i;
	for(i=1;i<10;i++)
	{
		printf(" %d X %d=%2d",a,i,a*i);
		printf("\n");
	}
}

void main()
{
	int a;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d",&a);
	gugu(a);
}

