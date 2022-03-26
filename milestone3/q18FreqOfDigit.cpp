#include <iostream>
using namespace std;

int main()
{

    int n,last;
    
    int freq[10] = {0};

    cin>>n;
    while (n > 0)
    {
        last = n % 10;
        n = n / 10;
        freq[last]++;
    }

    for(int i=0;i<10;i++)
        if(freq[i]!=0)
            cout<<"freq of"<<i<<"is"<<freq[i]<<endl;
    return 0;
}
