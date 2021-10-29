class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int ans=0;int sum=0;map<int,int>m;
        m.insert({0,1});
        for(auto e: nums){
            sum=(sum+e)%k;
            if(sum<0) sum+=k;
            ans+=m[sum];
         m[sum]++;

        }
        return ans;
    }
};