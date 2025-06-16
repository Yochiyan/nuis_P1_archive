/*
ŠwĞ”Ô†F32025017
–¼‘OF‰Á“‡œ‹v
ƒtƒ@ƒCƒ‹–¼FŠ‹à‚©‚¼‚¦‚é‚­‚ñ
ì¬“úF2025/4/14
ŒvZ®
*/

#include <stdio.h>

int main(void)
{
	int a1000;//1000yen no hako
	int a500;//500yen no hako
	int a100;//100yen no hako
	int a50;//50yen no hako
	int a10;//10yen no hako
	int a5;//5yen no hako
	int a1;//1yen no hako

	printf("‚ ‚È‚½‚ÌŠ‹àŠz‚ğŒvZ‚µ‚Ü‚·B\n‹àí‚²‚Æ‚É–‡”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	printf("¡1000‰~F ");	scanf("%d", &a1000);
	printf("500‰~: ");	scanf("%d", &a500);
	printf("›100‰~: ");	scanf("%d", &a100);
	printf("50‰~: ");	scanf("%d", &a50);
	printf("‡I10‰~: ");	scanf("%d", &a10);
	printf("‡D5‰~: ");	scanf("%d", &a5);
	printf("‡@1‰~: ");	scanf("%d", &a1);
	printf("============================\n");
	printf("c‚‚Í%d‚Å‚·B\n", a1000 * 1000 + a500 * 500 + a100 * 100 + a50 * 50 + a10 * 10 + a5 * 5 + a1 * 1);
	return 0;
}
