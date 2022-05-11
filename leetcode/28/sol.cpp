#include<iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle)
{
    int idx;
    bool found = false;
    if(needle == "" || haystack == "")
    {
        return 0;
    }

    if(haystack.size() < needle.size())
    {
        return -1;
    }

    for(int i = 0; i<haystack.size();i++)
    {
        found = true;
        for(int j = i, k = 0;k<needle.size(); k++, j++)
        {
            if(haystack[j] != needle[k])
            {
                found = false;
                break;
            }
        }

        if(found)
        {
            idx = i;
            break;
        }
    }   
    if(idx >= haystack.size())
    {
        return -1;
    }

    return idx;




}

int main()
{

    string s1 = "aaa";
    string s2 = "a";
    cout<<strStr(s1, s2);

    return 0;
}