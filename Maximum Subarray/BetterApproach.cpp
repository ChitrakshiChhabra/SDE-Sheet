#include <bits/stdc++.h>
using namespace std;
// Time Complexity --> O(n^2)
// Space Complexity --> O(1)
int fun(vector<int> &nums)
{
    int maxi = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for(int j = i; j < nums.size(); j++)
            sum+=nums.at(j);
        maxi = max(sum, maxi);
    }
    
    return maxi;
}

int main()
{
    vector <int> nums = {5,4,-1,7,8};
    cout << fun(nums);
    return 0;
}
