#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int bin_to_dec(string bin)
{
    int val = 0;
    for(int i = 0, j = bin.length()-1; j>=0; j--, i++)
    {
        val += (bin[j] - '0') * pow(2, i);
    }

    return val;
}
string dec_to_bin_rev(int num)
{
    string bin;
    while(num != 0)
    {
       
       if(num%2 == 0) bin+='0';
       else bin += '1';
        
        num /= 2;
    }

    return bin;


}

string findDifferentBinaryString(vector<string>& nums) 
{
    int l = nums[0].length();
    int s = pow(2,l);
    int inums[s+1];

    memset(inums, 0, sizeof(inums));

    for(int i = 0; i<nums.size(); i++)
    {
        string current_num = nums[i];
        int val = bin_to_dec(current_num);
        inums[val] = 1;
      
    }
    if(inums[0] == 0)
    {
        string z;
        for(int i = 0; i<l; i++) z += '0';
        return z;

    }

    for(int i = 0; i<s; i++)
    {
        if(inums[i] == 0)
        {
            string bin_val = dec_to_bin_rev(i);
            if(bin_val.length() < l)
            {
                int diff = l - bin_val.length();
                for(int i = 0; i<diff; i++)
                {
                    bin_val += '0';
                }
            }

            reverse(bin_val.begin(), bin_val.end());

            return bin_val;
        }
    }

    return "-1";
        
}


int main()
{
    vector<string> b;
    b.push_back("00");
    b.push_back("10");
    b.push_back("11");
    cout<<findDifferentBinaryString(b);
    // cout<<bin_to_dec("101");
    // cout<<dec_to_bin(6);


    return 0;
}