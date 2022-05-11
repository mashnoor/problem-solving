#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    vector<int> result(digits.size()+1);
    bool carry = false;
    for(int i = digits.size() - 1; i>=0; i--)
    {
        if(i == digits.size() - 1)
        {
            int val = digits[i] + 1;
            if(val>9)
            {
                carry = true;
                result[i+1] = 0;
            }
            else
            {
                result[i+1] = val;
                carry = false;
            }
        }
        else if(carry)
        {
            int val = digits[i] + 1;
            if(val>9)
            {
                carry = true;
                result[i+1] = 0;
            }
            else
            {
                result[i+1] = val;
                carry = false;
            }
        }

        else
        {
            result[i+1] = digits[i];
        }



    }
    if(carry)
    {
        result[0] = 1;
    }
    else
    {
        result.erase(result.begin());
    }

    

    return result;
        
}

int main()
{



    return 0;
}