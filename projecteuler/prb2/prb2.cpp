#include<iostream>


using namespace std;

int main ()
{
    int prev_1 = 0;
    int prev_2 = 1;
    int sum = 0;
    for(int i = 0; i<500; i++)
    {
        int now = prev_1 + prev_2;
//        cout<<now<<endl;

        prev_1 = prev_2;
        prev_2 = now;

        if (now%2==0)
        {
         sum += now;
        }

        if (now >= 4000000)
        {
            break;
        }


    }
    cout<<sum<<endl;



    return 0;
}