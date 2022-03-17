#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Maximum of 2 numbers " << endl;
    cout << "Number  : ";
    cin >> num;

    if (num % 2 == 0)
        cout <<" number is even";
    else
        cout <<" number is odd "; 
           
    return 0;
}