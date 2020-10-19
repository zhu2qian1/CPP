#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool f;
    for (int i = 3; n >= i; i++)
    {
        int x = i;
        f = true;
        if (x % 3 == 0)
        {
            cout << " " << i;
            f = false;
        }
        while ((x) && (f))
        {
            if (x % 10 == 3)
            {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;
    return 0;
}
