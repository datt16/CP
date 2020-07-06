// https://yukicoder.me/problems/no/1070
// unsolved
#include "bits/stdc++.h"
using namespace std;

int main()
{
    string c;
    cin >> c;
    for (int i = 0; i < c.size(); ++i)
    {
        int a = powf(10.0, i);
        cout << a << " " << stoi(c) / a << endl;
    }

    return 0;
}