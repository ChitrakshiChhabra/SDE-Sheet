#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(m * n) * O(m + n)
// Space Complexity O(1)
// Assuming m --> no. of rows, n --> no. of columns
void fun(vector<vector<int>> matrix)
{
    int m = matrix.size(), n = matrix.at(0).size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                // Row to -1
                for (int k = 0; k < n; k++)
                {
                    if (matrix[i][k] != 0)
                        matrix[i][k] = -1;
                }
                // Column to -1
                for (int k = 0; k < m; k++)
                {
                    if (matrix[k][j] != 0)
                        matrix[k][j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
                matrix[i][j] = 0;

            cout << matrix[i][j] << " ";
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