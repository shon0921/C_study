#include <stdio.h>
// 손해성
void main()
{
	int a;
	int b,c,d;

	printf ("년도를 입력하세요. : ");
	scanf("%d",&a);
	b = a%4;
	c = a%100;
	d = a%400;

	if ((b == 0 && c != 0) || d == 0 )
	{
		printf ("%d 년은 윤년입니다.",a);
	}
	else
	{
		printf ("%d 년은 윤년이 아닙니다.",a);
	}
}
	
