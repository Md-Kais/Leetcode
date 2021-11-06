class Solution {
public:
    int maxProduct(vector<int>& n) {
        int ans=n[0];
        int ma=n[0];
        int mi=n[0];int i=0;
        for(auto e: n){
           if(i>0){
                int temp=ma;
            ma=max({e,ma*e,mi*e});
            mi=min({e,temp*e,mi*e});
            ans=max(ma,ans);
           }
            i++;
        }
    return ans;
    }
};