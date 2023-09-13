class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long f[n+1];
        long long g[n+1];
        f[0]=nums[0];
        g[0]=nums[n-1];
        for(int i=1;i<n;i++){
            f[i]= nums[i]*f[i-1];
            g[i] = nums[n-i-1]*g[i-1];
        }
      vector<int>ans;
       
         for(int i=0;i<n;i++){
            if(i==0){
                ans.push_back(g[n-2]);
            }
            else if(i==n-1){
                ans.push_back(f[i-1]);
            }
            else{
                 ans.push_back(f[i-1]*g[n-i-2]);
            }
         }
        return ans;
    }
};