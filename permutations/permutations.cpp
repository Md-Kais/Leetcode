class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;int n=nums.size();
        sort(nums.begin(),nums.end());
        do{
            vector<int>v;
            for(auto e: nums){
                v.push_back(e);
                
            }
            ans.push_back(v);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};