#include <iostream>
using namespace std;
void fun(int num)
{
    if (num > 0)
    {
        fun(num - 1); // head recursion->first step-> recursive function
        cout << num << endl;
        // fun(num - 1); // tail recursion--->last statement-->below this there is no statement-->5->4->3->2->1
    }
    return;
}

int main()
{
    fun(5);
}
