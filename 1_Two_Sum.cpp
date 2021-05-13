#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //Brute Force
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

main()
{
    vector<int> nums{11, 2, 15, 7};

    int target = 9;
    Solution obj;
    vector<int> result = obj.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}