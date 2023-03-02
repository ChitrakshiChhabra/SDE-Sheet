#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void nextPermutation(vector<int>& nums) {

    int n = nums.size(), ind1, ind2;

    for(ind1 = n - 2; ind1 >= 0; ind1--)
        if(nums.at(ind1) < nums.at(ind1 + 1)) break;
        
    if(ind1 < 0)
        reverse(nums.begin(), nums.end());
    else
    {
        for(ind2 = n - 1; ind2 > ind1; ind2--)
            if(nums.at(ind2) > nums.at(ind1)) break;
        swap(&nums.at(ind1), &nums.at(ind2));
        reverse(nums.begin() + ind1 + 1, nums.end());
    }
        
}

int main()
{
    vector <int> nums = {1,2,5,4,3};
    nextPermutation(nums);
    for(auto a: nums)
        cout << a << " ";
    return 0;
}
