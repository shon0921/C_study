#include <stdio.h>

void main()
{
	FILE *wfp;
	int i,j;

	wfp = fopen("C:\\Temp\\gugu.txt","w");
	for(j=2;j<10;j++)
	{
		fprintf(wfp," #제%d단#",j);		
	}
	fprintf(wfp,"\n\n");
	for(i=1;i<10;i++)
	{
		for(j=2;j<10;j++)
		{
			fprintf(wfp," %dX %d=%2d",j,i,i*j);
		}
		fprintf(wfp,"\n");
	}
}
