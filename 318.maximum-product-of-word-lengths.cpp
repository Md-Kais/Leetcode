/*
 * @lc app=leetcode id=318 lang=cpp
 *
 * [318] Maximum Product of Word Lengths
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int len = words.size();
        vector<int> word;
        for (auto e : words)
        {

            string s = e;
            int sum = 0;
            for (int i = 0; i < s.length(); i++)
            {
                sum |= 1 << (s[i] - 'a');
            }
            word.push_back(sum);
        }
        for(auto e: word){
            cout<<e<<endl;
        }
        long long int ans = 0;
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if ((word[i] & word[j] )== 0){
                    long long int anss = words[i].size() * words[j].length();
                    ans = max(ans, (long long int)(anss));
                }
                   
            }
        }
        return ans;
    }
};
// @lc code=end
