#include <iostream>
using namespace std;

int main()
{
    int h, w;
    for (;;)
    {
        cin >> h >> w;
        if (h == w && w == 0)
            break;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
