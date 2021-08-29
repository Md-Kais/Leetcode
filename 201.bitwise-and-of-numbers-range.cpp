/*
 * @lc app=leetcode id=201 lang=cpp
 *
 * [201] Bitwise AND of Numbers Range
 */

// @lc code=start

class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        long long int ans;
        if(left==0){ ans=0; }
        else if (__builtin_clz(left) == __builtin_clz(right))
        {
            ans = left;
            for (long long int i = left; i <= right; i++)
            {
                ans &= i;
            }
        }
        else
        {
            ans = 0;
        }
        return ans;
    }
};
// @lc code=end
