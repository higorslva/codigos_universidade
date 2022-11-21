#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int lista [] = {31, 41, 52, 65, 13, 82, 873, 24, 85, 313, 123, 313, 213, 53, 123, 31, 41, 82};
    for (int x=0; x < 123; ++x)
    {
        lista [x] = x + 1;
        std::cout << "[" << x << "] = " << lista [x] << std::endl;
        for (int x=0; x < 8; ++x)
        {

        }
    }

    return 0;
}
