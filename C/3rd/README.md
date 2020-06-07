# 授業課題
## No.03-AB

A - 2つの整数の大きいほうを返す
B - 整数の絶対値を返す

```c
int my_greater(int a, int b);
int my_abs(int a, int b);
```

## No.03-C
degree ==> radian の変換関数を作る
また、それを用いてdegreeの三角関数を作る
```c
double deg2rad(double deg);
double deg_sin(double deg);
double deg_cos(double deg);
```

## No.03-D
モンテカルロ法による円周率の計算を行う
1. 試行回数nを入力
2. ランダムにn点の(x, y)座標を発生させる
    > (x, y)は(0.0, 0.0) ~ (1.0, 1.0)
3. この座標が円の内部だった場合の数をカウントする
4. 「試行回数」と「円の内部だった場合の数」から円周率の近似値を求める
