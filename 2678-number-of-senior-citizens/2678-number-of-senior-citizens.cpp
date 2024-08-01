class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int cnt = 0;
        for(string person : details)
        {
            if(person[11]>'6') cnt++;
            if(person[11] == '6' && person[12] > '0') cnt++;
        }
        
        return cnt;
        
    }
};