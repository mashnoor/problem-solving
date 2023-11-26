#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix)
    {
        for(int c = 0; c<matrix[0].size(); c++)
        {
            int con = 0;
            for(int r = 0; r<matrix.size(); r++)
            {
                if(matrix[r][c] == 1)
                {
                    con += 1;
                    matrix[r][c] = con;
                }
                else
                {
                    con = 0;
                }
            }
        }

        int mx = -1;

        for(int r = 0; r<matrix.size(); r++)
        {
            sort(matrix[r].begin(), matrix[r].end());
            for(int c = 0; c<matrix[r].size(); c++)
            {
                int v = matrix[r][c];
                v = v * (matrix[r].size() - c);
                mx = max(v, mx);
            }
        }


        return mx;

        
    }
};



int main()
{



    return 0;
}