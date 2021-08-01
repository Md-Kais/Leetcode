class Solution {
public:
    void solve(vector<int>nums, vector<int>out , set<vector<int>>&ans){
        if(nums.size()==0){
            multiset<int>check (out.begin(), out.end());
            vector<int>v(check.begin(),check.end());
            ans.insert(v);
            return;
        }
     
        vector<int>op1=out;
        vector<int>op2=out;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1,ans);
        solve(nums,op2,ans);
    return ;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>out;
        
        solve(nums,out,ans);
        
        vector<vector<int>>ans2;
        for(auto e: ans){
            ans2.push_back(e);
        }
        return ans2;
    }
};