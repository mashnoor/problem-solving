#include<iostream>

using namespace std;

int mySqrt(int x)
{
    unsigned long long int lo = 0;
    unsigned long long int hi = x;
    while (hi - lo > 1)
    {
        unsigned long long int mid = (lo+hi) / 2;
        // cout<<mid<<endl;
        // break;
        if(x > mid*mid)
        {
            lo = mid;
        }
        else if(x < mid*mid)
        {
            hi = mid;
        } else if(x == mid*mid)
        {
            return mid;
        }
    }


    
   
    return lo;

}
int main()
{
    // for(int i = 1; i<10; i++)
    // {
        cout<<mySqrt(2147395599)<<endl;
        cout<<mySqrt(2147483647)<<endl;
    // }
    // cout<<mySqrt(6);



    return 0;
}