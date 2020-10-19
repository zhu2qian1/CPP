#include <iostream>
using namespace std;

int main()
{
    char o;
    int x, y;
    while (true)
    {
        cin >> x >> o >> y;
        if (o == '?')
            break;
        else if (o == '+')
            cout << x + y << endl;
        else if (o == '-')
            cout << x - y << endl;
        else if (o == '*')
            cout << x * y << endl;
        else // o == '/'
            cout << x / y << endl;
    }
    return 0;
}
