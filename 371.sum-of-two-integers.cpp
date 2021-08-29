/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution
{
public:
    int getSum(int a, int b)
    {

        while (b != 0)
        {
            unsigned carry_bit = b & a;
            a= a^b;
            b = carry_bit << 1;
        }

        return a;
    }
};
// @lc code=end
