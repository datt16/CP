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
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    ll ans = 0;

    if (b == 0 && c == 0)
    {
        cout << a << endl;
        return 0;
    }
    /*else {
        if (a + b >= k) {
            cout << a << endl;
            return 0;
        }
        else {
            cout << a - (k - c) << endl;
            return 0;
        }
    }*/

    for (int i = 0; i < k; i++)
    {
        if (a != 0)
        {
            ans++;
            a--;
        }
        else if (b != 0)
        {
            b--;
        }
        else if (c != 0)
        {
            //ans--;
            //c--;
            ans -= k - i;
            break;
        }

        if (a == 0)
        {
            if (b + i >= k)
            {
                break;
            }
            else
            {
                i += b;
                b = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
