#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        int n;
        cin>>n;
        for(int k = 2; k<33; k++)
        {
            int tk = int(pow(2, k)) - 1;
            // cout<<tk;
            if(n % tk == 0)
            {
                cout<<(n/tk)<<endl;
                break;

            }
        }
    }




    return 0;
}