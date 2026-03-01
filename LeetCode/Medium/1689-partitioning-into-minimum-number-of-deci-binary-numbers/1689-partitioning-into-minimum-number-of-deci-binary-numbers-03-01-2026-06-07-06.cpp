class Solution {
public:
    int minPartitions(string n) {
        int x=n.size(),ans=-1;
        for(auto e: n){
            ans=max((e-'0'),ans);

        }
        return ans;
    }
};