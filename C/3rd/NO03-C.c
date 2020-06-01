#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793 // PIを3.141592653689793に変換する(マクロ置換)

double deg2rad(double deg)
{
    return deg * PI / 180; // degにPI/180を乗算してラジアンに変換
}

double deg_sin(double deg)
{
    return sin(deg2rad(deg)); // 引数の値をradに変換 -> そのままsin()の引数へ
}

double deg_cos(double deg)
{
    return cos(deg2rad(deg)); // 引数の値をradに変換 -> そのままcos()の引数へ
}

int main(void)
{
    double deg[] = {0, 45, 90, 120, 180, -90, -120};
    int n = sizeof(deg) / sizeof(deg[0]);

    for (int i = 0; i < n; i++)
    {
        printf("%.1f [deg] = %f [rad] \n", deg[i], deg2rad(deg[i]));
        printf("sin(%.1f[deg]) = %f, cos(%.1f[deg]) = %f\n\n", deg[i], deg_sin(deg[i]), deg[i], deg_cos(deg[i]));
    }
    return 0;
}

/*
実行例
-----------------
0.0 [deg] = 0.000000 [rad]
sin(0.0[deg]) = 0.000000, cos(0.0[deg]) = 1.000000

45.0 [deg] = 0.785398 [rad]
sin(45.0[deg]) = 0.707107, cos(45.0[deg]) = 0.707107

90.0 [deg] = 1.570796 [rad]
sin(90.0[deg]) = 1.000000, cos(90.0[deg]) = 0.000000

120.0 [deg] = 2.094395 [rad]
sin(120.0[deg]) = 0.866025, cos(120.0[deg]) = -0.500000

180.0 [deg] = 3.141593 [rad]
sin(180.0[deg]) = 0.000000, cos(180.0[deg]) = -1.000000

-90.0 [deg] = -1.570796 [rad]
sin(-90.0[deg]) = -1.000000, cos(-90.0[deg]) = 0.000000

-120.0 [deg] = -2.094395 [rad]
sin(-120.0[deg]) = -0.866025, cos(-120.0[deg]) = -0.500000
------------------
*/