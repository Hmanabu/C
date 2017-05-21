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
	printf("’P‰¿‚ğ“ü—Í\n");
	scanf("%d", &r.tanka);

	printf("”—Ê‚ğ“ü—Í\n");
	scanf("%d", &r.suryou);

	r.kingaku = r.tanka*r.suryou;
	r.zei = r.kingaku*0.08;
	r.zeikomi = r.kingaku+r.zei;

	printf("‡Œv‹àŠz:%d\nÅ‚İ‹àŠz:%d\n", r.kingaku, r.zeikomi);

	return 0;
}