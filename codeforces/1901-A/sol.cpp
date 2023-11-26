#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int n, x;
        int mx = -1, prev;
        cin>>n>>x;
        for(int j = 0; j<n; j++)
        {
            int k;
            cin>>k;
            if(mx == -1)
            {
                mx = k;
                
            }
            else
            {
                int v = k - prev;
                // cout<<"v : "<<v<<" k: "<<k<<endl;
                mx = max(mx, v);
            }

            prev = k;

        }

        mx = max(mx, 2*(x-prev));
        cout<<mx<<endl;
    }


    return 0;
}