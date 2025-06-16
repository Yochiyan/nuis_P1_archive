/*
学籍番号：32025017
名前：加島慈久
ファイル名：星占い
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	int retry;
	do {
		int mm, dd; // 占う月・日
		int bm, bd; // 誕生月・日
		int k, i;   // 金運・愛情運
		// int s;   // 勉強運（未使用のため削除）

		printf("\nあなたの運勢を占います。\n占う日と誕生日を入力してください。\n");

		printf("占う日　月："); scanf("%d", &mm);
		printf("　　　　日："); scanf("%d", &dd);
		printf("誕生日　月："); scanf("%d", &bm);
		printf("　　　　日："); scanf("%d", &bd);

		printf("\n%d月%d日のあなたの運勢は？\n", mm, dd);

		/* 金運 */
		if (mm == bm)
			k = 5;
		else if (mm + 1 == bm || (mm == 12 && bm == 1))
			k = 4;
		else if (mm - 1 == bm || (mm == 1 && bm == 12))
			k = 3;
		else if ((mm - bm) % 2 == 0)
			k = 2;
		else
			k = 1;

		printf("￥金運￥：");
		while (k > 0) {
			printf("★");
			k--;
		}
		printf("\n");

		/* 愛情運 */
		switch ((dd * bd) % 5) {
		case 0: i = 5; break;
		case 1: i = 4; break;
		case 2: i = 3; break;
		case 3: i = 2; break;
		case 4: i = 1; break;
		}

		printf("＜愛情運＞：");
		while (i > 0) {
			printf("★");
			i--;
		}
		printf("\n");

		/* 繰り返し確認 */
		printf("もう一度？【Yes・・1｜No・・0】：");
		scanf("%d", &retry);
		puts("---------------------------------");

	} while (retry == 1);

	return 0;
}
