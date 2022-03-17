#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Number  : ";
    cin >> num;

    if (num > 0)
        cout << " number is positive";
    else if (num < 0)
        cout << " number is negative ";
    else if (num == 0)
        cout << "Number is zero";

    return 0;
}