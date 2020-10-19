#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double r, pi = 3.141592653589;
    cin >> r;
    cout << setprecision(18);
    cout << r * r * pi << " ";
    cout << 2 * r * pi << endl;
    return 0;
}
