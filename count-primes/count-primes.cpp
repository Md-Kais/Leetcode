class Solution {
public:
  
    int prime(int n){
          vector<int>v(n+1,0);
        for(int i=3;i<=sqrt(n)+1;i+=2){
            if(v[i]==0){
                for(int j=i*i;j<=n;j+=i){
                v[j]=1;
                }
            }
            
        }
        int ans=0;
        if(n>2){
            ans=1;
        }
        for(int i=3;i<n;i+=2){
            if(v[i]==0){
                cout<<i;
                ans++;
            }
        }
        return ans;
    }
    int countPrimes(int n) {
        int ans=prime(n);
        return ans;
    }
};