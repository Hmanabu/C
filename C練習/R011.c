#include<stdio.h>

#pragma warning(disable:4996)
// ���K1 http://www.geocities.jp/kenji_y0328/crenshu/
typedef struct
{
	int kokugo;
	int syakai;
	int rika;
	int sum;
	int ave;
}kyouka;


int main()
{
	kyouka k;
	printf("����̓_������͂��Ă�������\n");
	scanf("%d", &k.kokugo);

	printf("�Љ�̓_������͂��Ă�������\n");
	scanf("%d", &k.syakai);

	printf("���Ȃ̓_������͂��Ă�������\n");
	scanf("%d", &k.rika);

	k.sum = k.kokugo + k.syakai+k.rika;
	k.ave = k.sum / 3;

	printf("���v�_��%d\n���ϓ_%d\n",k.sum,k.ave);

	

	return 0;
}