#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <unordered_map>
using namespace std;

vector<vector<int>> maintrig = {};
int mn = INT_MAX;
unordered_map<pair<int, int>, int> mp;

int trav(vector<int>& v, int row, int k)
{
    if(v.size() == 1)
    {
        return v[0];
    }
    else
    {
        for(int i = 0; i<v.size()-1; i++)
        {
            int m1 = v[i] + trav(maintrig[row-1], row-1, i-1);
            int m2 = v[i] + trav(maintrig[row-1], row-1, i);
        }
    }


}

int minimumTotal(vector<vector<int>>& triangle) 
{
    maintrig = triangle;
    int k = triangle[0][0];
    if (triangle.size() == 1)
    {
        return k;
    }
    else
    {

        trav(triangle, k, 0, 1);
    }

    return mn;
    
}


int main()
{
    vector<vector<int>> v = {{2},{3,4},{6,5,7},{4,1,8,3}};
    // vector<vector<int>> v = {{-12}};


    cout<<minimumTotal(v);




    return 0;
}