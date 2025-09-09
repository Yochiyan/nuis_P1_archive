/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習４－２
作成日：2025/4/21
計算式ai
*/

#include <stdio.h>

int main(void)
{
	int sum;
	int retry;

	
		int n1, n2;
		puts("二つの整数を入力せよ。");
		printf("整数a："); scanf("%d", &n1);
		printf("整数b："); scanf("%d", &n2);

		// 大小を入れ替える処理
		if (n1 > n2) {
			int temp = n1;
			n1 = n2;
			n2 = temp;
		}

		// 合計計算
		sum = 0;
		for (int i = n1; i <= n2; i++) {
			sum += i;
		}

		printf("%d以上%d以下の全整数の和は%dです。\n", n1, n2, sum);

		
	return 0;
}
