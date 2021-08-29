/*
 * @lc app=leetcode id=397 lang=cpp
 *
 * [397] Integer Replacement
 */

// @lc code=start
class Solution {
public:
    int integerReplacement(int n) {
        int ans=0;
        if(n==1) return ans;
        else if(n==__INT32_MAX__) return 32;
        else {
            while(n){
                if(n & 1){
                    int l=(n+1)/2;
                    int r=(n-1)/2;
                    if(r%2==0) n=r;
                    else if(l % 2==0) l=r;
                    else {
                        n=r;
                    }
                    ans++;
                }
                else{
                    n=n/2;
                    ans++;
                }
            }
            return ans-1;
        }
    }
};
// @lc code=end

