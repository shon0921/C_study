#include <stdio.h>

void main()
{
	int a;
	do{
		
		printf("손님 주문하시겠습니까 ? \n");
		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
		scanf("%d",&a);

	
	
		switch(a)
		{
			case 1 :
			printf("#카페라뗴 주문하셨습니다.");
			break;
			case 2 :
			printf("#카푸치노 주문하셨습니다.");
			break;
			case 3 :
			printf("#아메리카노 주문하셨습니다.");
			break;
			case 4 :
			printf("#주문하신 커피 준비하겠습니다.");
			break;
			default : 
			printf("잘못 입력하셨습니다.");
		}
	} while (a !=4);
}
