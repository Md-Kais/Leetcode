class Solution {
public:
    bool canConstruct(string se, int k) {
       multiset<char>s;
        set<char>st;
        int odd=0;
        for(auto e: se){
            s.insert(e);
            st.insert(e);
        }
        for(auto e: st){
            if(s.count(e)&1){
                odd++;
            }
            
        }
        if(k>=odd && k<=se.length()){
            return true;
        }
        return false;
    }
};