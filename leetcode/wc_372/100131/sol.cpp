#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int findMinimumOperations(string s1, string s2, string s3)
{
    if(s1[0] != s2[0] || s2[0] != s3[0] || s3[0] != s1[0])
    {
        return -1;
    }
    int min_str_len = min(s1.length(), min(s2.length(), s3.length()));
    int max_str_len = max(s1.length(), max(s2.length(), s3.length()));
    int res = 0;
    int i = 1;
    for(i = 1; i<min_str_len; i++)
    {
         if(s1[i] != s2[i] || s2[i] != s3[i] || s3[i] != s1[i])
         {
           
            break;
         }
        
    }
    i = i -1;
    // cout<<i<<endl;

    return (s1.length()-1-i) + (s2.length()-1-i) + (s3.length()-1-i);
}

int main()
{
    cout<<findMinimumOperations("b", "bacd", "bacef")<<endl;



    return 0;
}