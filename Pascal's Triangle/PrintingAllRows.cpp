#include <bits/stdc++.h>
using namespace std;

// Time Complexity --> O(n^2)
// Space Complexity --> O(n^2)

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans(numRows);
    for(int i = 0; i < numRows; i++)
    {
        ans.at(i).resize(i + 1);
        ans.at(i).at(0) = ans.at(i).at(i) = 1;
        for(int j = 1; j < i; j++)
            ans.at(i).at(j) = ans.at(i - 1).at(j - 1) + ans.at(i - 1).at(j);
    }        
    return ans;
}

      
int main()
{
    vector<vector<int>> r = generate(5);
    for(auto a: r)
    {
        for(auto b: a)
            cout << b << " ";
        cout << endl;
    }
  return 0;
}
