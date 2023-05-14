#include <iostream>
using namespace std;
int func(int num)
{
    if (num > 0)
        return func(num - 1) + 2;
    return 0;
}

int main()
{
    cout << func(5);
}
