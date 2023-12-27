class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        char cc = colors[0];
        int sum = neededTime[0];
        int mx = neededTime[0];
        int total = 0;
        for(int i = 1; i<colors.length(); i++)
        {
            if(colors[i] == cc)
            {
                sum += neededTime[i];
                mx = max(mx, neededTime[i]);
            }
            else
            {
                sum = sum - mx;
                total += sum;
                cc = colors[i];
                mx = neededTime[i];
                sum = neededTime[i];
                
            }
        }
        
        if(colors.length() > 1 && colors[colors.length()-1] == colors[colors.length()-2])
        {
            sum = sum - mx;
            total += sum; 
        }
        
        return total;
        
    }
};