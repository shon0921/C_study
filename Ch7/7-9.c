#include <stdio.h>

void main()
{
	int i;
	int hap =0;

	for(i=1;i<=100;i++)
	{
		hap = hap+i;
		if(hap>=1000)
		{
			break;
		}
	}
	printf("1~100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d \n",i);
}
	
