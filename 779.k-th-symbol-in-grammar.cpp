/*
 * @lc app=leetcode id=779 lang=cpp
 *
 * [779] K-th Symbol in Grammar
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        string h;
        if (n == 1)
        {
            h = "0";
            char ans1 = h[k - 1];
            int ans = ans1 - '0';
            return ans;
        }
        else if (n == 2)
        {
            h = "01";
           return  kthGrammar(n - 1, k);
        }
        else
        {
            string p = h;
            reverse(p.begin(), p.end());
            h += p;
            return kthGrammar(n - 1, k);
        }
    }
};
// @lc code=end
