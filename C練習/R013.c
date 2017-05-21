#include<stdio.h>

#pragma warning(disable:4996)

#define adult 1500 //大人料金    
#define child 800//子供料金

/*  料金算出    区分により違う料金を算出する*/

int main() {
	int kubun = 0;
	int ninzuu = 0;
	int goukei = 0;

	printf("身分を入力してください\n大人:1\n子供:2\n");
	scanf("%d", &kubun);

	printf("人数を入力してください\n");
	scanf("%d", &ninzuu);

	switch (kubun)
	{
	case 1: goukei = adult * (ninzuu);
			printf("合計:%d", goukei);
			break;

	case 2:goukei = child * (ninzuu);
		   printf("合計:%d", goukei);
		   break;

	default:
		break;
	}


	return 0;
}

