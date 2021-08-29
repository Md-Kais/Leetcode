/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        vector<int> v(32, 0);
        int ma = 0;
        for (auto e : nums)
        {
            for (int i = 0; i < 32; i++)
            {
                if (e & (1 << i))
                {
                    v[i]++;
                    ma++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {

            if (v[i]>(nums.size())/2)
                ans += (1 << i);
        }
        return ans;
    }
};
// @lc code=end
