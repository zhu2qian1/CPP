#include <iostream>

int main()
{
    int a, b, c, cnt = 0;
    std::cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
            cnt++;
    }
    std::cout << cnt << std::endl;
    return 0;
}
