/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        string an=s+t;
        int ans=0;
        for(int i=0;i<an.length();i++){
            ans^=an[i];
        }
        return ans;
    }
};
// @lc code=end

