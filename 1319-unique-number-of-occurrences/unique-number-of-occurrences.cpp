class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ans=true;
        set<int>s;
        unordered_set<int>ss;
        unordered_map<int,int>m;
        for(auto e: arr){
            m[e]++;
            s.insert(e);
        }
        for(auto e: s){
            int x= m[e];
            cout<<x<<endl;
            if(ss.count(x)==1){
                ans=false;
            }
            ss.insert(x);
        }
        return ans;

    }
};