#include<iostream>
#include<vector>

using namespace std;

vector<int> replaceElements(vector<int>& arr) 
{
    int sz = arr.size();
    int cmax = arr[sz-1];
    arr[sz-1] = -1;
    for(int i = sz - 2; i>=0; i--)
    {
        int tmp = arr[i];
        arr[i] = cmax;
        if(tmp > cmax)
        {
            cmax = tmp;
        }
    }

    return arr;



        
}

int main()
{



    return 0;
}