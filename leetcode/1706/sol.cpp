#include <iostream>
#include <vector>

using namespace std;


vector<int> findBall(vector<vector<int>>& grid)
{
    int rows = grid.size();
    int cols = grid[0].size();
    vector<int> res;
    int s_ball = 0;
    while(s_ball < cols)
    {
        int c = s_ball;
        int r = 0;
        while(r < rows)
        {

            if(grid[r][c] == 1)
            {
                // Go right
                // Check border and curve
                if(c+1>=cols)
                {
                    res.push_back(-1);
                    break;
                }
                else if 
                {

                }
                
            }

        }
        

    }


}

int main()
{



    return 0;
}