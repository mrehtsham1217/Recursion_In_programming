#include <iostream>
using namespace std;
void func(int num)
{
    if (num > 0)
    {
        func(num - 1); // recursion ->self calling of function
        cout << num << endl;
    }
}
// void func(int num)
// {
//     if (num > 0)
//     {
//         cout << num << endl;
//         func(num - 1); // recursion ->self calling of function
//     }
// }

int main()
{
    func(5);
}
