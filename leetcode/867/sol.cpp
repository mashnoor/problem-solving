#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > transpose(vector<vector<int> >& matrix)
{
    vector<vector<int> > result(matrix[0].size(), vector<int> (matrix.size(), 0));
    // cout<<result[0].size();
    // cout<<rows<<" "<<cols;
    // return result;
    for(int i = 0; i<matrix.size(); i++)
    {
        for(int j = 0; j<matrix[i].size(); j++)
        {
            result[j][i] = matrix[i][j];

        }
    }

    return result;
}

int main()
{
    vector<vector<int> > v2 = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int> > v = transpose(v2);
    for(int i = 0; i<v.size(); i++)
    {
        for(int j = 0; j<v[0].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}