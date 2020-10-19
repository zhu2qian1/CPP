#include <iostream>

int main()
{
    int h, w;
    for (;;)
    {
        std::cin >> h >> w;
        if (h == w && w == 0)
            break;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if ((i + j) % 2 == 0)
                    std::cout << "#";
                else
                    std::cout << ".";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
