#include <iostream>
using namespace std;
int main()
{
    //sum of digits of a number 
    int n,sum=0,num;
    cin>>n;
//1234=1+2+3+4
    do
    {  
        num=n%10;//1234, 4
        sum=sum+num;
        n=n/10;
    } while (n>0);
    
    cout<<"Sum is "<<sum;  
return 0;
}