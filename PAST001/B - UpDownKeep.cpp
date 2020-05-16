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
    VI a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        if (a[i - 1] == a[i])
            cout << "stay\n";
        else if (a[i - 1] > a[i])
            cout << "down"
                 << " " << a[i - 1] - a[i] << endl;
        else if (a[i - 1] < a[i])
            cout << "up"
                 << " " << a[i] - a[i - 1] << endl;
    }
    return 0;
}
