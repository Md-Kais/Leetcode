class Solution {
public:
    
    int subset(long long a[],int n,long long sum){
        int dp[n+1][sum+1];
        for (int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for (int i=1;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(a[i-1]==0){
                    dp[i][j]=dp[i-1][j];
                }
                else if(a[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    } 
    
    
    int findTargetSumWays(vector<int>& nums, int S) {
    long long arr[100];
    std::copy(nums.begin(), nums.end(), arr);
        long long sum=0;long long cnt=0;
        for(auto e: nums){
            sum+=e;
            if(e==0){
                cnt++;
            }
        }
       int n=nums.size();
       
        //cout<<sum<<endl;
       // cout<<cnt<<endl;
        /*for(int j=0;j<n;j++){
            cout<<arr[j]<<endl;
        }*/
        if(S>sum || (S+sum)%2!=0){
            return 0;
        }
        if(n==1 && S>arr[0]){
           int kkk=0;
            return kkk;
        }
        else if(n==1 && S<=arr[0]){
            return 1;
        }
        
        else{
        int z=subset(arr,n,((sum+S)/2));
            long long k=pow(2,cnt)*z;
        return k;
    }
    }
};