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
    int n;
    cin >> n;
    VI a(n), chk(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        chk[a[i] - 1]++;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (chk[i] == 0)
            ans2 = i + 1;
        if (chk[i] == 2)
            ans1 = i + 1;
    }

    if (ans1 == 0)
        cout << "Correct\n";
    else
        cout << ans1 << " " << ans2 << endl;

    return 0;
}
