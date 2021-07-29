class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        for(int i=0;i<(1<<n);i++){
            vector<int>v;int count=0;
            for(int j=0;j<n;j++){
                if(i & (1<<j)) {
                    count++;
                    v.push_back(nums[j]);
                }
            }
            if(count==k){
                ans.push_back(v);
            }
        }
        return ans;
    }
};