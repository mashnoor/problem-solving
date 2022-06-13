#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// vector<vector<int>> maintrig = {};
int mn = INT_MAX;
void trav(vector<vector<int>>& triangle, int k, int i, int j)
{
    vector<int> v = triangle[j];
    int m1 = k + v[i];
    int m2 = k + v[i+1];

    if(j >= triangle.size() -1)
    {
        int cmin = min(m1, m2);
        mn = min(cmin, mn);
        return;
    }
    else
    {
        trav(triangle, m1, i, j+1);
        trav(triangle, m2, i+1, j+1);
    }


}

int minimumTotal(vector<vector<int>>& triangle) 
{
    // maintrig = triangle;
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