#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
#include <utility>
#include <queue>
#include <tuple>
#include <map>
using namespace std;
using ll = long long;
using VI = vector<int>;

int main()
{
    int n, k;
    cin >> n >> k;
    VI list(n, 0);
    for (int i = 0; i < k; i++)
    {
        int d;
        cin >> d;
        for (int i = 0; i < d; i++)
        {
            int in;
            cin >> in;
            list[in - 1]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] == 0)
            ans++;
    }

    cout << ans << endl;
}
