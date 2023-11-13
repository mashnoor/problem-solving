#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<char, char>>> board_centers;
    
    float distance(int x1, int y1, int x2, int y2)
    {
        int a = abs(x1 - x2);
        int b = abs(y1 - y2); 
        return sqrt(pow(a,2) + pow(b,2));
    }

    pair<int, int> get_center(int x, int y)
    {
        // cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
        vector<pair<int, int>> centers;
        for(int i = 1; i<=7; i+=3)
        {
            for(int j = 1; j<=7; j+=3){
                
                // cout<<"Dist: "<<distance(x, y, i, j)<<endl;
                // cout<<"-----------------"<<endl;
        
                if(i == x && j == y)
                {
                    // cout<<"x: "<<x<<" y: "<<y<<" Center i: "<<i<<" j: "<<j<<endl;
                    return make_pair(i, j);
                }
                else if(distance(x, y, i, j) <= 1.42)
                {
                    // cout<<"x: "<<x<<" y: "<<y<<" Center i: "<<i<<" j: "<<j<<endl;
                    return make_pair(i, j);
                }
            }
        }
        

        return make_pair(-1,-1);
    }


    
    bool is_in_block(int x, int y, vector<vector<char>>& board)
    {
        pair<int, int> center = get_center(x, y);
        int cx = center.first;
        int cy = center.second;

        char val = board[x][y];

        for(int i = -1; i<=1; i++)
        {
            for(int j = -1; j<=1; j++)
            {
                int current_x = cx + i;
                int current_y = cy + j;
                if(current_x == x && current_y == y)
                {
                   
                    continue;
                }

                if(board[current_x][current_y] == val)
                {
                    cout<<"x: "<<x<<" y: "<<y<<" current_x: "<<current_x<<" current_y: "<<current_y<<endl;
                    return true;
                }
            }
        }

        return false;

    }
    
    bool is_in_row(int x, int y, vector<vector<char>>& board)
    {
        char val = board[x][y];

        for(int i = 0; i<9; i++)
        {
            if(i == y) continue;

            if(board[x][i] == val)
            {
                return true;
            }
        }

        return false;

    }
    
    
    bool is_in_column(int x, int y,vector<vector<char>>& board)
    {
        char val = board[x][y];

        for(int i = 0; i<9; i++)
        {
            if(i == x) continue;
            if(board[i][y] == val)
            {
                return true;
            }

        }

        return false;

    }

    
    bool isValidSudoku(vector<vector<char>>& board)
    {
        
        for(int i = 0; i<9; i++)
        {
            for(int j = 0; j<9; j++)
            {
                if(board[i][j] == '.') continue;
                
                if(is_in_block(i, j, board) || is_in_row(i, j, board) || is_in_column(i, j, board))
                {
                    
                    cout<<is_in_block(i, j, board)<<" "<<is_in_row(i, j, board)<<" "<<is_in_column(i, j, board);
                    return false;
                }
            }
        }

        return true;        
    }
