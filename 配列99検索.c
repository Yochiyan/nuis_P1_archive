/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4－20配列九九
作成日：2025/7/14
計算式
*/

#include <stdio.h>
int x[9][9]={0};
int i,j;
int a;//検索
int b = 0;//検索結果
int main(void)
{   
/*	printf("　 | 1  2  3  4  5  6  7  8  9\n---+---------------------------\n");
    for (int i = 1; i <= 9; i++) {
    	printf(" %d |", i);
    	
        for (int j = 1; j <= 9; j++)
		printf("%3d", i * j);
		x[i-1][j-1] = i * j;
            putchar('\n');
        }

/*-------------------------------------*/
printf("配列九九バージョン\n");
 for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            x[i][j] = (i + 1) * (j + 1);
        }
    }
printf("　 | 1  2  3  4  5  6  7  8  9\n---+---------------------------\n");
    for (int i = 1; i <= 9; i++) {
    	printf(" %d |", i);
    	
    	
        for (int j = 1; j <= 9; j++)
		printf("%3d", x[i-1][j-1]);
		//x[i-1][j-1] = i * j;
            putchar('\n');
        }    

printf("\n配列の中身から検索\n");
   
printf("数値の検索をします。検索する値を入力してください。");	scanf("%d", &a);

    // 検索処理
    for(i = 1; i <= 9; i++) {
        for ( j = 1; j <= 9; j++) {
            if (x[i-1][j-1] == a) {
                printf("%dがありました。 %d × %dの値です。\n",a,i,j);
                b++;
            }
        }
    }
if (b == 0) {
printf("検索の結果、%dはありませんでした。",a);
} 
else {
printf("検索の結果%dが%d個ありました。",a,b);
}
    return 0;
}
