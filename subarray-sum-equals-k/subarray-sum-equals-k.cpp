class Solution {
public:
    int subarraySum(vector<int>& n, int k) {
      unordered_map<int,int>m; int sum=0;int ans=0;m[0]=1;
        for(auto e: n){
            sum+=e;
            ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};