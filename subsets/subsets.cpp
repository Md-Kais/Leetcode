class Solution {
public:
    int j=0;
    void solve(vector<int>nums, vector<int>out, vector<vector<int>>&ans){
        if(nums.size()==0){
            ans.push_back(out);
            return;
        }
        vector<int>op1=out;
        vector<int>op2=out;
        op2.push_back(nums[0]);
        for(auto e: op2){
            cout<<e<<" "<<j;
        }
        nums.erase(nums.begin()+0);
        j++;
        solve(nums,op1,ans);
        solve(nums,op2,ans);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>out;
        solve(nums,out,ans);
        return ans;
    }
};