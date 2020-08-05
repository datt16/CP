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
    string s;
    cin >> s;
    string t;
    cin >> t;
    bool flag = true;
    for (int i = 0; i < t.size() - 1; i++)
    {
        if (s[i] != t[i])
            flag = false;
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
