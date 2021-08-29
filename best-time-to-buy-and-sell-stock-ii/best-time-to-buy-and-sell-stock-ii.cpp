class Solution {
public:
    int maxProfit(vector<int>& a) {
       int ans=0;
        for(int i=0;i<a.size()-1;i++){
            ans+=max(a[i+1]-a[i],0);
        }
        return ans;
        
    }
};