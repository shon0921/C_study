#include <stdio.h>

void main()
{
	int a, b;

	for ( ; ; )
	{
		printf("´õÇÒ µÎ ¼ö ÀÔ·Â (¸ØÃß·Á¸é ctrl+c) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a,b, a+b);
	}
}
