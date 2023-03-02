#include <bits/stdc++.h>
using namespace std;
// Time Complexity --> O(n)
// Space Complexity --> O(1)
int maxSubArray(vector<int>& nums) {
    int maximum = INT_MIN, sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum+=nums.at(i);
        if(maximum < sum) maximum = sum;
        if(sum < 0) sum = 0;
    }
    return maximum;
        
}

int main()
{
    vector <int> nums = {5,4,-1,7,8};
    cout << maxSubArray(nums);
    return 0;
}
