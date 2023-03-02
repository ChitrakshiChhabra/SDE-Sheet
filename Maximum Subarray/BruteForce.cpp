#include <bits/stdc++.h>
using namespace std;
// Time Complexity --> O(n^3)
// Space Complexity --> O(1)
int fun(vector<int> &nums)
{
    int maxi = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = 0; j < nums.size(); j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
                sum+=nums.at(k);
            maxi = max(sum, maxi);
        }
    }
    
    return maxi;
}

int main()
{
    vector <int> nums = {5,4,-1,7,8};
    cout << fun(nums);
    return 0;
}
