#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int bestClosingTime(string customers)
{
    //Calculate first and last idx 
    int slen = customers.length();
    int fc = 0, lc = 0;
    int penalties[slen+1];
    int y = 0, n = 0;
    memset(penalties, 0, sizeof(penalties));
    for(int i = 0; i<slen; i++)
    {
        if(customers[i] == 'Y') fc++;
        if(customers[i] == 'N') lc++;
    }

    penalties[0] = fc;
    penalties[slen] = lc;

    if(customers[0] == 'Y') y=1;
    else n = 1;

    for(int i = 1; i < slen; i++)
    {
        int p = penalties[i-1];
        int curr_p = p - y + n;
        if(y > 0) y-=1;
        if(n > 0) n-=1;
        penalties[i] = curr_p;

        if(customers[i] == 'Y') y+=1;
        else n+=1;

    }

    int min_idx = 0;
    int min_pen = penalties[0];
    // for(int i =0;i<=slen; i++) cout<<penalties[i]<<" ";

    for(int i = 1; i<=slen; i++)
    {
        if(penalties[i] < min_pen)
        {
            min_pen = penalties[i];
            min_idx = i;
        }
    }

    return min_idx;
}

int main()
{

    cout<<bestClosingTime("YYYY");    

    return 0;
}