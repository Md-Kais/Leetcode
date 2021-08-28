class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mi=prices[0],ma=prices[0];int ans=0;
         for(int i=0;i<prices.size();i++){
           if(mi>=prices[i]) {
               mi=prices[i];ma=-1;ans=max(ans,(ma-mi));
           }
            else if(ma<=prices[i]) {
                ma=prices[i];ans=max(ans,(ma-mi));
            }
         }
        return ans;
    }
};