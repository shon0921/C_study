#include <stdio.h>

void main()
{
	int num1;
	float num2;
	int arr1[6];

	for(int i=1;i<6;i++)
	{
		printf("%d번 학생 점수 입력 : ",i);
		scanf("%d",&arr1[i]);
	}

	for(int i=1;i<6;i++)
	{
		num1=num1+arr1[i];
		num2=num2+arr1[i];
	}
	num2=num2/2;

	printf ("학생 점수 합계 %d",num1);
	printf ("학생 점수 평균 %f",num2);
}
	

	
