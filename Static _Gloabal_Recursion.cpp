#include <iostream>
using namespace std;
int x = 0;
int func(int number)
{
    // static int x = 0; // same for throghout the program
    if (number > 0)
    {
        x++;                         // calling phase of recursion
        return func(number - 1) + x; // x will add in function at returning time
    }
}
int main()
{
    int num = 5;
    cout << func(num);
}
