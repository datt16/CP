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
    bool flag = false;
    string s;
    cin >> s;
    vector<string> a;
    string t = "";
    for (int i = 0; i < s.size(); i++)
    {

        if (isupper(s[i]))
        {
            if (flag)
            {
                flag = false;
                t += tolower(s[i]);
                a.push_back(t);
            }
            else
            {
                flag = true;
                t = "";
                t += tolower(s[i]);
            }
        }
        else
        {
            t += s[i];
        }
    }

    sort(a.begin(), a.end());
    string ans = "";
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (j == 0 || j == a[i].size() - 1)
            {
                ans += toupper(a[i][j]);
            }
            else
            {
                ans += a[i][j];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
