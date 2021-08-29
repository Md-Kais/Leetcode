class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix_sum;int sum=0;prefix_sum.push_back(0);
        for(auto e: nums){
            sum+=e;
            prefix_sum.push_back(sum);
        }
        for(int i=1;i<=nums.size();i++){
            if(prefix_sum[i-1]==prefix_sum[nums.size()]-prefix_sum[i]){
                return i-1;
            }
        }
        return -1;
    }
};