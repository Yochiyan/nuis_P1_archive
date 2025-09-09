/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習3-13
作成日：2025/5/19
*/

#include <stdio.h>

int main(void)
{
	int month;
while (1) {
	printf("何月ですか：");
	scanf("%d", &month);

	switch (month) {
		// 春
		case 3:
		case 4:
		case 5:
			printf("%d月は春です。\n", month);
			break;
		// 夏
		case 6:
		case 7:
		case 8:
			printf("%d月は夏です。\n", month);
			break;
		// 秋
		case 9:
		case 10:
		case 11:
			printf("%d月は秋です。\n", month);
			break;
		// 冬
		case 12:
		case 1:
		case 2:
			printf("%d月は冬です。\n", month);
			break;
		// 不正な月
		default:
			printf("%d月はありませんよ！！\a\n", month);
			break;
	}
}
	return 0;
}


