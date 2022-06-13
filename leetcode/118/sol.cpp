#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <utility>

using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result;
    result.push_back(vector<int>{1});
    result.push_back(vector<int>{1,1});
    if(numRows == 1)
    {
        result.pop_back();
        return result;
    }
    if(numRows == 2)
    {
        return result;
    }

    for(int i = 3; i<=numRows; i++)
    {
        vector<int> current;
        for(int j = 0; j<i; j++)
        {
            if(j == 0 || j == i-1)
            {
                current.push_back(1);
            }
            else
            {
                current.push_back(result[i-1][j-1] + result[i-1][j]);

            }

        }

        result.push_back(current);

    }

    return result;
        
}

int main()
{
    vector<vector<int>> v = generate(3);

    for(int i = 0; i<v.size(); i++)
    {
        for(int j = 0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

