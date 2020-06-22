/*
  10進数を2進数に変換
*/

#include <stdio.h>

int main(void)
{
    char retry; //もう一度やるかの確認//
    char n = 'n';

    do
    {          //もう一度やるための繰り返し//
        int j; //10進数を入れる//
        int z; //keke//
        int i[32];
        ;

        printf("10進数(0～9999)を入力してください:");
        scanf_s("%d", &j);
        if (j >= 0 && j <= 9999)
        {
            for (z = 0; j > 0; z++)
            {
                i[z] = j % 2;
                j = j / 2;
            }
            while (z > 0)
                printf("%1d", i[--z]);
            printf("\n");
        }
        else
        {
            puts("正しい値を入力してください");
        }
        printf("終了しますか？ y/n");
        scanf_s(" %c", &retry);
    } while (retry == n);

    return 0;
}