class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=0;int z=1;
        if(nums.size()==1) return 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                z++;
            }
            else{
                ans=max(ans,z);
                z=1;
            }
        }
        return max(ans,z);
    }
};