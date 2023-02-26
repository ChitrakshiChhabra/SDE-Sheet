#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(m * n) + O(m * n)
// Space Complexity O(m) + O(n)
// Assuming m --> no. of rows, n --> no. of columns
void fun(vector<vector<int>> matrix)
{
    int m = matrix.size(), n = matrix.at(0).size();
    vector <int> row(m,-1), col(n,-1);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix.at(i).at(j) == 0)
            {
                row.at(i) = 0;
                col.at(j) = 0;
            }
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(row.at(i) == 0 || col.at(j) == 0)
                matrix.at(i).at(j) = 0;
            cout << matrix.at(i).at(j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1},
                                  {1, 0, 1, 1},
                                  {1, 1, 0, 0},
                                  {0, 0, 0, 1}};
    fun(matrix);
    return 0;
}