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

bool isint(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (!('0' <= s[i] && s[i] <= '9'))
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (isint(s))
        cout << stoi(s) * 2 << "\n";
    else
        cout << "error\n";
    return 0;
}
