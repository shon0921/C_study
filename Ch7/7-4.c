#include <stdio.h>

void main()
{
	int a,b;
	char r;
	while (1)
	{
		printf ("����� �� ���� �Է� (���߷��� Ctrl+C) : ");
		scanf("%d %d",&a,&b);

	
		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf(" %c",&r);

		switch(r)
		{
		case '+' :
			printf("%d + %d = %d �Դϴ�. \n",a,b,a+b);	
			break;
		case '-' :
			printf("%d - %d = %d �Դϴ�. \n",a,b,a-b);	
			break;
		case '*' :
			printf("%d * %d = %d �Դϴ�. \n",a,b,a*b);	
			break;
		case '/' :
			printf("%d / %d = %f �Դϴ�. \n", a, b, a/(float)b);	
			break;
		case '%' :
			printf("%d %% %d = %d �Դϴ�. \n",a,b,a%b);	
			break;
		default :
			printf("���� �߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
}
		
			
