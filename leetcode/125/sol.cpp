#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    string sc;

    for(int i = 0;i<s.length(); i++)
    {
        if(s[i]>= 'A' && s[i]<='Z')
        {
           
            sc+=tolower(s[i]);
           
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            sc+=s[i];
           
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            sc += s[i];
        }

    }


    int i = 0;
    int j = sc.length()-1;
    while (i<=j)
    {
        if(sc[i] != sc[j])
        {
            
            return false;
        }
        i++;
        j--;
    }
    return true;
    
        
}


int main()
{

    cout<<isPalindrome("A man, a plan, a canal: Panama");



    return 0;
}