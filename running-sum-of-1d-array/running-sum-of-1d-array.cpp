class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0; vector<int>ans;
        for(auto e: nums){
            sum+=e;
            ans.push_back(sum);
        }
        return ans;
    }
};