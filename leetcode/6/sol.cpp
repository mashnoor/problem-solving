#include <iostream>
#include <string>

using namespace std;

string convert(string s, int numRows)
{
    string result = "";
    int cols = s.size();
    char final[numRows][cols];
    memset(final, '0', sizeof(final));

    int p = 0, q = 0;

    for(int i = 0, j = 1; i<s.size(); i++, j++)
    {
        if(j%numRows != 0 || j==1)
        {
            final[p][q] = s[i];
            p++;
        }
        else
        {
            --p;
            ++q;
            final[p][q] = s[i];
            if((j+1) % numRows == 0) 
            {
                p = 0;
            }

        }
    } 

    for(int i = 0; i<numRows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            cout<<final[i][j]<<" ";
            if(j==cols-1) cout<<endl;
            if(final[i][j] != '0')
            result += final[i][j];
        }
    }

    return result;

}

int main()
{

    convert("PAYPALISHIRING", 4);

    return 0;
}