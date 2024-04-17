#include <stdio.h>

void main()
{
	int a,b;
	char r;
	while (1)
	{
		printf ("계산할 두 수를 입력 (멈추려먼 Ctrl+C) : ");
		scanf("%d %d",&a,&b);

	
		printf("계산할 연산자를 입력하세요 : ");
		scanf(" %c",&r);

		switch(r)
		{
		case '+' :
			printf("%d + %d = %d 입니다. \n",a,b,a+b);	
			break;
		case '-' :
			printf("%d - %d = %d 입니다. \n",a,b,a-b);	
			break;
		case '*' :
			printf("%d * %d = %d 입니다. \n",a,b,a*b);	
			break;
		case '/' :
			printf("%d / %d = %f 입니다. \n", a, b, a/(float)b);	
			break;
		case '%' :
			printf("%d %% %d = %d 입니다. \n",a,b,a%b);	
			break;
		default :
			printf("값을 잘못 입력하셨습니다.\n");
		}
	}
}
		
			
