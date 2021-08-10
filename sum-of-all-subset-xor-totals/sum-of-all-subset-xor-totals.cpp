class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
       long long  ans=0;long long n=nums.size();
        for(int i=0;i<(int)(1<<n);i++){
            long long sum=0;
            for(int j=0;j<n;j++){
                if(i & (1<<j)) sum^=nums[j];
                
            }
            ans+=sum;
        }
        // 
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<=i;j++){
        //        if(j==0){
        //            ans+=pref_sum[i];
        //            cout<<ans<<endl;
        //        }
        //         else{
        //             ans+=(pref_sum[i]^pref_sum[j-1]);
        //             cout<<ans<<endl;
        //         }
        //     }
        // }
        return ans;
    }
    
};