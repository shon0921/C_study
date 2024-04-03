#include <stdio.h>

void main()
{
	int i;
	int dan,num;

	printf("몇 단? ");
	scanf("%d", &dan);
	printf("몇 번? ");
	scanf("%d", &num);

	for ( i=1 ; i <=num ; i++)
	{	
		printf(" %d X %d = %d \n", dan, i, dan*i);
		
	}

}
