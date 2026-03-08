class Solution {
public:
    bool checkOnesSegment(string s) {
        int ans=0,prev=0;
        for(auto e: s){
            if(e=='1') ans++;
            else if(e=='0'){
                if(ans>0) prev++;
                ans=0;
            }
            if(prev>1) return false;
        }
        if(ans>0) prev++;
        if(prev>1) return false;
        return true;
    }
};