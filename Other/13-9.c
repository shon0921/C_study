#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	struct student{
		char name[10];
		int age;
	};
	
	int i,c;
	printf("입력할 학생 수 : ");
	scanf("%d",&c);

	struct student *p=malloc(sizeof(struct student));
	
	for(i=0;i<c;i++)
	{
		char imsi[10];
		printf("이름과 나이 입력");
		scanf("%s",imsi);
		strcpy((p+i)->name,imsi);
		scanf("%d",&(p+i)->age);
	}
	printf("\n\n");
	printf("학생 명단");
	for(i=0;i<c;i++)
	{
		printf("이름:%s , 나이:%d",(p+i)->name,(p+i)->age);
		printf("\n");
	}
}
