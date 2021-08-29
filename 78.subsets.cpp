/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        set<int> s;
        for (auto e : nums)
        {
            s.insert(e);
        }
        int ii=0;
        for (auto e : s)
        {
            nums[ii] = e;
            ii++;
        }
        int n = nums.size();
        vector<vector<int>> v;

        for (int i = 0; i < (1 << n); i++)
        {
            vector<int> v1;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    v1.push_back(nums[j]);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};
// @lc code=end
