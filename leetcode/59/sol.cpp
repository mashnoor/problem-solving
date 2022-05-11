#include<iostream>
#include<vector>
#include<string> 
using namespace std;

bool inBorder(int x, int y, int n)
{
    return x + 1 == n || y + 1 == n || x -1 == -1 || y - 1 == -1;
}

vector<vector<int>> generateMatrix(int n) 
{
    bool visited[21][21] = {false};
    vector<vector<int>> vec( n , vector<int> (n, 0));
    
    int val = 1;
    int x = 1, y = 1;
    string now = "y";
    while (val <= n*n)
    {
        if(!visited[x][y])
        {
            vec[x-1][y-1] = val;
            visited[x][y] = true;
            val++;
        }
        

        //check if next is border
        // if(inBorder(x, y, n))
        // {
        //     // shift now
        //     if(now == "x") now = "y";
        //     else now = "x";
        // }

        // check if increase or decrease
        if(now == "x")
        {
            int incx = x+1;
            int decx = x-1;
            if(incx <= n && visited[incx][y] == false)
            {
                x = incx;
            }
            else if(decx >= 1 && visited[decx][y] == false)
            {
                x = decx;
            }
            else
            {
                // cout<<"Shifting to y"<<endl;
                now = "y";
            }
        }
        else
        {
            int incy = y+1;
            int decy = y-1;
            if(incy <= n && visited[x][incy] == false)
            {
                y = incy;
            }
            else if(decy >= 1 && visited[x][decy] == false)
            {
                y = decy;
            }
            else
            {
                // cout<<"Shifting to x"<<endl;
                now = "x";
            }
        }

        


        
    }

    return vec;
    

    


}

int main()
{

    generateMatrix(4);



    return 0;
}