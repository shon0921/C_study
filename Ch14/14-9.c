#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;
	FILE *nfp;

	rfp = fopen(argv[1] , "r");

	nfp = fopen(argv[2], "w");

	for( ; ; )
	{
		fgets(str,199,rfp);
		if (feof(rfp))
			break;
		fputs(str,nfp);
	}
	fclose(rfp);
	fclose(nfp);
}
