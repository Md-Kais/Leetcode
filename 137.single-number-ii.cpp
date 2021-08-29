/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        vector<int> v(32,0);

        for(auto e: nums){
            
           for(int i=0;i<32;i++){
               if(e & (1<<i)){
                   v[i]++;
               }
           }
        }
        int ans=0;
        int i=0;
     for(int i=0;i<32;i++){
         if (v[i] % 3 == 1)
         {
             ans += (1 << i);
             
         }
     }
           
        
        return ans;
        // set<int> s;
        // multiset<int> m;
        // int ans;
        // for (auto e : nums)
        // {
        //     s.insert(e);
        //     m.insert(e);
        // }
        // for (auto e : s)
        // {
        //     if (m.count(e) == 1)
        //     {
        //        ans=e;
        //     }
        // }
        // return ans;
    }
};
// @lc code=end
