#include <iostream>
#include <string>
using namespace std;

bool is_conflict(int loc_ab, int loc_ba)
{
    return loc_ab +1 == loc_ba || loc_ba + 1 == loc_ab;
}

int main()
{
    // bool has_ab = false, has_ba = false;
    int ab_loc = -1, ba_loc = -1;
    string s;
    cin>>s;
    for(int i = 1; i<s.length();i++)
    {
        if(s[i-1] == 'A' && s[i] == 'B' && (is_conflict(ab_loc, ba_loc) || ab_loc == -1))
        {
            ab_loc = i-1;
        }
        else if(s[i-1] == 'B' && s[i] == 'A' && (is_conflict(ab_loc, ba_loc) || ba_loc == -1))
        {
            ba_loc = i-1;
        }
        
    }

    cout<<ba_loc<<" "<<ab_loc<<endl;

    cout<<is_conflict(ab_loc, ba_loc);

    if(ab_loc != -1 && ba_loc != -1 && !is_conflict(ab_loc, ba_loc))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }



}