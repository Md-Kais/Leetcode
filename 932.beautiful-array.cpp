/*
 * @lc app=leetcode id=932 lang=cpp
 *
 * [932] Beautiful Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> beautifulArray(int N)
    {
        vector<int> res = {1};
        while (res.size() < N)
        {
            //make another array to store temporary array.
            vector<int> v;
            //take odd; (2*n-1)
            for (auto e : res)
            {
                if (2 * e - 1 <= N)
                    v.push_back(2 * e - 1);
            }
            //take even;(2*n)
            for (auto e : res)
            {
                if (2 * e <= N)
                    v.push_back(2 * e );
            }
            res=v;
        }
        return res;
    }
};
// @lc code=end
