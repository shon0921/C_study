#include <stdio.h>
//���ؼ�
void main()
{
	FILE *wfp;
	int i,m;
	
	wfp = fopen("C:\\c_study\\gugu.txt", "w");

	for(i=2; i<10; i++)
	{
		fprintf(wfp," #��%d��#",i);
	}
	
	fprintf(wfp,"\n");
	fprintf(wfp,"\n");

	for(i=1; i<10;i++)
	{
		for(m=2;m<10;m++)
		{
			fprintf(wfp," %dX %d=%2d",m,i,i*m);
		}
	fprintf(wfp,"\n");
	}
}
