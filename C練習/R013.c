#include<stdio.h>

#pragma warning(disable:4996)

#define adult 1500 //��l����    
#define child 800//�q������

/*  �����Z�o    �敪�ɂ��Ⴄ�������Z�o����*/

int main() {
	int kubun = 0;
	int ninzuu = 0;
	int goukei = 0;

	printf("�g������͂��Ă�������\n��l:1\n�q��:2\n");
	scanf("%d", &kubun);

	printf("�l������͂��Ă�������\n");
	scanf("%d", &ninzuu);

	switch (kubun)
	{
	case 1: goukei = adult * (ninzuu);
			printf("���v:%d", goukei);
			break;

	case 2:goukei = child * (ninzuu);
		   printf("���v:%d", goukei);
		   break;

	default:
		break;
	}


	return 0;
}

