#include <stdio.h>

void main()
{
	int a,b;
	
	for(a=2;a<10;a++)
	{
		printf(" #Á¦%d´Ü#",a);
	}
	printf("\n\n");

	for(a=1;a<10;a++)
	{
		for(b=2;b<10;b++)
		{
			printf(" %1dX %1d=%2d",b,a,b*a);
		}
		printf("\n");
	}
}

