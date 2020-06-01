#include <stdio.h>

int my_greater(int a, int b);
int my_abs(signed int a);

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    printf("%d is greater\n", my_greater(a, b));
    printf("my_abs(%d) = %d\n", a, my_abs(a));
    printf("my_abs(%d) = %d\n", b, my_abs(b));
    return 0;
}

int my_greater(int a, int b)
{
    if (a > b)
        return a; // aのほうが大きいのでaを返す
    else
        return b; // aではないので、bを返す
}

int my_abs(signed int a)
{
    if (a < 0)
        return a * -1; // 0未満なら-1をかけて返す
    else
        return a; // それ以外ならそのまま返す
}

/*
実行結果
----- 入力 -----
9
-19
----- 出力 -----
a = 9, b = -19
9 is greater
my_abs(9) = 9
my_abs(-19) = 19
---------------
*/