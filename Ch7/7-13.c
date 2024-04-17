#include <stdio.h>

void main()
{
	int a,b,c,d;

	printf("합계의 시작값 ==> ");
	scanf("%d",&a);
	printf("합계의 끝값 ==> ");
	scanf("%d",&b);
	printf("배수 ==> ");
	scanf("%d",&c);

	for(;a<=b;a++)
	{
		if(a%c==0)
		{
			d+=a;
		}
	}
	printf("100부터 200까지의 4배수의 합계 ==> %d",d);
}
