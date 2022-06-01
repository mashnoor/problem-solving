#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        unordered_map<char, bool> maps;
        string cbs = "YES";
        int c;
        cin>>c;
        char prev_n = '-';
        while (c--)
        {
            char n;
            
            cin>>n;
            if(maps.find(n) != maps.end() && n != prev_n)
            {
                cbs = "NO";
            }
            prev_n = n;
            maps[n] = true;
        }

        cout<<cbs<<endl;
        
    }
    


    return 0;
}