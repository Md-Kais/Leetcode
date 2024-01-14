class Solution {
public:
    bool closeStrings(string word1, string word2) {
        bool ans = true;
        unordered_map<char,int>w;
        unordered_map<char,int>w2;
        set<char>s;
        set<char>s2;
        for(auto e: word1){
            w[e]++;
            s.insert(e);
        } for(auto e: word2){
            w2[e]++;
            s2.insert(e);
        }
        if(!(s==s2)) ans=false;
        multiset<int>m;
        multiset<int>m2;
        for(int i=0;i<27;i++){
            char x= 'a'+i;
            // cout<<x<<endl;
            if(w[x]!=0){
                m.insert(w[x]);
            }
            if(w2[x]!=0){
                m2.insert(w2[x]);
            }
        }
        if(!(m==m2)) ans=false;
        return ans;
    }
};