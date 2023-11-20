#include <iostream>
#include <string>

using namespace std;
long long minimumSteps(string s)
{
    long long one_count = 0;
    long long steps = 0;
    for(long long i = 0; i<s.length(); i++)
    {
        if(s[i] == '1') one_count++;
        else steps += one_count;
    }

    return steps;
        
}


int main()
{
    cout<<minimumSteps("0111");

    return 0;
}