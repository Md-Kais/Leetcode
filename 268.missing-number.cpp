/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int cum = nums.size();
        int dum;
        if (cum % 4 == 0)
            dum = cum;
        else if (cum % 4 == 1)
            dum = 1;
        else if (cum % 4 == 2)
            dum = cum + 1;
        else if (cum % 4 == 3)
            dum = 0;
        int sum = 0;
        for (auto e : nums)
        {
            sum^=e;
        }
        return dum^sum;
    }
};
// @lc code=end
