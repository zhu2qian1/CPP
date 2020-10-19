#include <iostream>

int main()
{
    int h, w;
    for (;;)
    {
        std::cin >> h >> w;
        if (h == w && w == 0)
            return 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
                {
                    std::cout << "#";
                }
                else
                {
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
