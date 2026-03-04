class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>s;
        for(int i=0;i<prices.size();i++){
            int m=0;
            for(int j=i+1;j<prices.size();j++){
             if(prices[i]>=prices[j]) {
                m=prices[j]; break;
             }
            }
             
            s.push_back(prices[i]-m);
        }
        return s;
    }
};