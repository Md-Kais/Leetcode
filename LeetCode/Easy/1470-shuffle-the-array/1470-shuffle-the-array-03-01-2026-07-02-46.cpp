class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int k=0;
        for(int i=0;i<n;i++){
            ans[k]=nums[i];
            ans[k+1]=nums[i+n];
            k+=2;
            
        }
        return ans;
    }
};