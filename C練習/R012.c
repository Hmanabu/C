#include<stdio.h>

#pragma warning(disable:4996)

typedef struct {
	int tanka;
	int suryou;
	int kingaku;
	int zeikomi;
	int zei;
}ren02;


int main() {
	ren02 r = {0};
	printf("単価を入力\n");
	scanf("%d", &r.tanka);

	printf("数量を入力\n");
	scanf("%d", &r.suryou);

	r.kingaku = r.tanka*r.suryou;
	r.zei = r.kingaku*0.08;
	r.zeikomi = r.kingaku+r.zei;

	printf("合計金額:%d\n税込み金額:%d\n", r.kingaku, r.zeikomi);

	return 0;
}