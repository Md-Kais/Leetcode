class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int>seq(nums);
        sort(nums.begin(),nums.end());
        for(auto e: seq){
            auto lb = lower_bound(nums.begin(),nums.end(), e);
            ans.emplace_back((lb-nums.begin()));
        }
        return ans;
    }
};