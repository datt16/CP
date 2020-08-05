#include <iostream>
#include <vector>
#include <math.h>
#include <cctype>
#include <algorithm>
#include <sstream>
using namespace std;

const float PI = 3.14;

int main()
{
	long long n, k;
	cin >> n >> k;
	cout << min(k - n % k, n % k) << endl;

	return 0;
}
