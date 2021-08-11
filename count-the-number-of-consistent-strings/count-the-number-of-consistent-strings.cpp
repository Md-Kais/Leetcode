class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        set<char>st(allowed.begin(),allowed.end());
        for(auto e: words){
            bool check=false;
            for(auto s: e){
                if(st.count(s)!=1){
                    check=true;
                }
                
            }
            if(check==false){
                ans++;
            }
            check=false;
        }
        return ans;
    }
};