#include <iostream>
using namespace std;
void fun(int num)
{
    if (num > 0)
    {
        cout << num << endl;
        fun(num - 1);
        fun(num - 1); // tree recursion
    }
    return;
}

int main()
{
    fun(3);
}
