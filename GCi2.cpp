#include<iostream>
using namespace std;

int main()
{
    int num1,num2,max;
    cout<<"Maximum of 2 numbers "<<endl;
    cout<<"Number 1 : ";
    cin>>num1;
    cout<<"Number 2 : ";
    cin>>num2;
    
    if(num1>num2)
     max= num1;
        else 
        max=num2;
    cout<<"MAx num is "<<max;
return 0;
}