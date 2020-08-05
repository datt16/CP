#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
#include <utility>
#include <queue>
#include <tuple>
#include <map>
#include <cctype>
using namespace std;
using ll = long long;
using VI = vector<int>;

int main()
{
    int n[6];
    for (int i = 0; i < 6; i++)
        cin >> n[i];
    sort(n, n + (sizeof(n) / sizeof(n[0])));
    cout << n[3] << endl;
    return 0;
}
