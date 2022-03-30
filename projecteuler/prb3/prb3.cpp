#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n == 2)
    {
        return true;
    }

    if (n%2 == 0)
    {
        return false;
    }

    int t = sqrt(n);
    for(int i=3;i<=t; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }

    return true;



}


int main()
{

    long int val = 600851475143;
    int t = sqrt(val);
    for (int i = t; i>=2; i--)
    {
        if(!isPrime(i))
        {
            continue;
        }

        if (val%i == 0)
        {
            cout<<i<<endl;
            break;
        }
    }
    // cout<<isPrime(117);


    return 0;
}