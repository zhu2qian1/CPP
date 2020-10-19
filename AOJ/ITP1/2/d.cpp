#include <iostream>
using namespace std;

int main()
{
    int w, h, x, y, r;
    bool v = true;
    cin >> w >> h >> x >> y >> r;
    if (x - r < 0 || x + r > w)
        v = false;
    else if (y - r < 0 || y + r > h)
        v = false;
    if (v == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
