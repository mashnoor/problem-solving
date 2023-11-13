#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool repeatedSubstringPattern(string s) 
{
    if(s.length() <=1 ) return false;
    int i = 0;
    string curr_ss = "";
    while (i < s.length()-1)
    {
        
        curr_ss += s[i];
        if(s.length() % curr_ss.length() == 0)
        {
            string comp_s = "";
            while(comp_s.length() < s.length())
            {
                comp_s += curr_ss;
            }
            cout<<comp_s<<endl;
            if(comp_s.compare(s) == 0)
            {
                return true;
            }
        }

        i++;
    
    }

    return false;
    
    
}


int main()
{
    cout<<repeatedSubstringPattern("ab");


    return 0;
}
