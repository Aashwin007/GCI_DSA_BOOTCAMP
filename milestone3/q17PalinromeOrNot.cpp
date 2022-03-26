
#include <iostream>
using namespace std;

int main()
{

    int n, reverse = 0, num;
    cin >> n;
    num = n;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (reverse == num)
    {
        cout << num << " is a palindrome number" << endl;
    }
    else
    {
        cout << num << " is not a palindrome number" << endl;
    }
    return 0;
}