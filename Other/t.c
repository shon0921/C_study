#include <stdio.h>

void main()
{
	int i;
	int dan,num;

	printf("�� ��? ");
	scanf("%d", &dan);
	printf("�� ��? ");
	scanf("%d", &num);

	for ( i=1 ; i <=num ; i++)
	{	
		printf(" %d X %d = %d \n", dan, i, dan*i);
		
	}

}
