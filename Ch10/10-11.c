#include <stdio.h>
//손해성
void gugu(int a)
{
	for(int i = 1; i<10; i++)
	{
		printf("%d X  %d= %2d \n",a,i,a*i);
	}	
}

void main()
{
	int i;
	printf("출력 하고 싶은 단을 입력 : ");
	scanf("%d",&i);

	gugu(i);
}
