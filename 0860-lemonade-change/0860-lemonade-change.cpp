class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int f_c = 0, t_c = 0;
        for(int bill : bills)
        {
            if(bill == 5)
            {
                f_c++;
            }
            else if(bill == 10)
            {
                if(f_c <= 0) return false;
                f_c--;
                t_c++;
            }
            else if(bill == 20)
            {
                if(t_c > 0 && f_c > 0)
                {
                    t_c--;
                    f_c--;
                }
                else if(f_c > 2)
                {
                    f_c -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};