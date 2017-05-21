#include<stdio.h>

#pragma warning(disable:4996)
// 練習1 http://www.geocities.jp/kenji_y0328/crenshu/
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
	printf("国語の点数を入力してください\n");
	scanf("%d", &k.kokugo);

	printf("社会の点数を入力してください\n");
	scanf("%d", &k.syakai);

	printf("理科の点数を入力してください\n");
	scanf("%d", &k.rika);

	k.sum = k.kokugo + k.syakai+k.rika;
	k.ave = k.sum / 3;

	printf("合計点は%d\n平均点%d\n",k.sum,k.ave);

	

	return 0;
}