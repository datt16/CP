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
#include <math.h>
using namespace std;
using ll = long long;
using VI = vector<int>;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = n; i > 0; i--)
    {
        string a = to_string(i);
        if (a.size() % 2 != 0)
            ans++;
    }

    cout << ans << endl;

    return 0;
}
