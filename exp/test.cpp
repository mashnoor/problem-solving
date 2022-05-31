#include<iostream>
#include<vector>

using namespace std;

int binSearch(vector<int> v, int t)
{
    int end = v.size();
    int start = 0;
    while (start<=end)
    {
       
        int mid = ( start + end ) / 2;
        if(v[mid] == t) return mid;
        if(v[mid] > t) end = mid-1;
        if(v[mid] < t) start = mid+1;

    }
    return -1;
    
}

int main()
{
    vector<int> v = {3, 4, 5, 6, 7, 8, 9};

    int k = binSearch(v, 9);
    cout<<k;

}