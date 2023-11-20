#include <iostream>
#include <cmath>
using namespace std;
int maximumXorProduct(long long a, long long b, int n)
{
    int mx = 0;
    long long end = pow(2, n);
    for(long long i = 0; i<end; i++)
    {
        long long v = (a ^ i) * (b ^ i);
        // cout<<v<<endl;
        if(v > mx) mx = v;
    }
    cout<<"Max: "<<mx<<endl;

    return 0;
        
}

int main()
{
    maximumXorProduct(6, 7, 50);
}