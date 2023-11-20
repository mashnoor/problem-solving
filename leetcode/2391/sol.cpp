#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int G = 0, P = 0, R = 0;
        int minutes = 0;
        int last_g = -1, last_p = -1, last_m = -1;
        // vector<int> cumsum;
        // cumsum.push_back(0);
        
        for(int i = 0; i<garbage.size(); i++)
        {
            if(i != 0)
            {
                travel[i] += travel[i-1];
                // cumsum.push_back(val);
            } 

            string cg = garbage[i];
            for(int j = 0; j<cg.length();j++)
            {
                switch (cg[j])
                {
                    case 'M':
                        minutes++;
                        last_m = i;
                        break;
                    case 'P':
                        minutes++;
                        last_p = i;
                        break;
                    case 'G':
                        last_g = i;
                        minutes++;
                        break;
                }
            }
        }
        // cout<<"Minutes "<<minutes<<endl;
        // cout<<"g: "<<last_g<<" p: "<<last_p<<" m: "<<last_m<<endl;
        
        travel.insert(travel.begin(), 0);

        // for(int i = 0; i<travel.size();i++)
        // {
        //     cout<<travel[i]<<" ";
        // }
        // cout<<endl;
        int g_min = 0, p_min = 0, m_min = 0;
        if(last_g != -1) g_min = travel[last_g];
        if(last_p != -1) p_min = travel[last_p];
        if(last_m != -1) m_min = travel[last_m];

        return minutes + g_min + p_min + m_min;
    }
};
int main()
{
    Solution s;
    // vector<string> v{"G","P","GP","GG"};
    vector<string> v{"MMM","PGM","GP"};
    // vector<int> travel{2,4,3};
    vector<int> travel{3,10};
    cout<<s.garbageCollection(v, travel);




    return 0;
}