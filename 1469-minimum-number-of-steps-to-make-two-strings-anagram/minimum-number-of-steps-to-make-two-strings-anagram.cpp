 static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        unordered_multiset<char>z;
        unordered_multiset<char>x;
        set<char>xx;
        for(auto e: s){
            z.insert(e);
           // xx.insert(e);
        }
        for(auto e: t){
            x.insert(e);
            xx.insert(e);
        }
        for(auto e: xx){
            int y= x.count(e) - z.count(e);
            y > 0 ? ans+=y : ans+=0;
        }
        return ans;
    }
};