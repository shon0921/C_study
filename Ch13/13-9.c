#include <stdio.h>
#include <malloc.h>

void main()
{

	struct student {
	char name[10];
       	int age;
	};
	int i=0;

	int c;
	printf("�Է��� �л� �� : ");
	scanf("%d", &c);
	
	struct student *p = malloc(sizeof(struct student));

	for(i=0;i<c;i++){
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d",p[i].name,&p[i].age);
	}
	printf("\n\n");
	printf("-- �л� ��� --");
	for(i=0;i<c;i++){
		printf("\n�̸�:%s , ����:%d",p[i].name,p[i].age);
	}
	printf("\n");
}
		
