#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) 
{
    vector<vector<int>> vec( n , vector<int> (n, 0));
    int c = 0;
    int i = 0, j = 0;
    int c_i = 1;
    int c_j = 0;
    while (c <= n*n)
    {
        vec[i][j] = c++;
        i += i * c_i;
        j += j * c_j;
        if (vec[i][j] != 0)
        {
            
        }
    }

}

int main()
{



    return 0;
}