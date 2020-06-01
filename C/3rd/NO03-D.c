#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double rand_0to1()
{
    double r = rand() / (double)RAND_MAX; // 0以上1未満の乱数を生成
    return r;
}

int main(void)
{
    int n;
    int count = 0;
    double x, y;
    scanf("%d", &n);
    printf("n=%d\n", n);

    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++)
    {
        x = rand_0to1(); // x座標を乱数で求める
        y = rand_0to1(); // y座標を乱数で求める

        if (sqrt(pow(x, 2) + pow(y, 2)) <= 1) // 原点からの距離が1より小さかったら、count++
            count++;
    }
    printf("PI = %f", 4.0 * count / n); // 4ではなく4.0とかく(小数型にキャスト)
    return 0;
}

/*
実行結果
--- Example.1 ---
10
n=10
PI = 2.800000
-----------------

--- Example.2 ---
100
n=100
PI = 3.360000
-----------------

--- Example.3 ---
10000
n=10000
PI = 3.144400
-----------------

*/