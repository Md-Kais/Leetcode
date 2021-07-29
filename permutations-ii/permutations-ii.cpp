class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;int n=nums.size();
        vector<vector<int>>ans1;
         sort(nums.begin(),nums.end());
   
    do { vector<int>v;
       for(auto e: nums){
           v.push_back(e);
       }
        ans.insert(v);
    } while (next_permutation(nums.begin(),nums.end()));
    for(auto e: ans){
        ans1.push_back(e);
    }
 return ans1;
    }
};