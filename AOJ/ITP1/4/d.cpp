#include <iostream>
using namespace std;

int main()
{
    int mn = 1000000, mx = -1000000, n = 0, p = 0;
    long long sm = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sm = sm + p;
        if (p < mn)
            mn = p;
        if (p > mx)
            mx = p;
    }
    cout << mn << " " << mx << " " << sm << endl;
    return 0;
}
