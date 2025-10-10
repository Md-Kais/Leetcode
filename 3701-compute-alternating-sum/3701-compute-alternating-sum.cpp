class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans=0;
        int j=0;
        for(auto e: nums){
            if(j & 1){
                e*=-1;
            }
            j++;
            ans+=e;
        }
        return ans;
        
    }
};