class Solution {
public:
    string ans;int i=1;
    string reverseStr(string s, int k) {
        if(s.length()<k){
            if(i & 1) reverse(s.begin(),s.end());
            ans+=s;
            return ans;
        }
        string ss=s.substr(0,k);
        if(i & 1) {
            reverse(ss.begin(),ss.end());
        }
        ans+=ss;
        i++;
        s.erase(0,k);
        return reverseStr(s,k);
    }
};