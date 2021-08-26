class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int i=0,d=s.length();
        for(int j=0;j<s.length();j++){
            if(s[j]=='I'){
                ans.push_back(i);
                i++;
                
            }
              if(s[j]=='D'){
                ans.push_back(d);
                d--;
                
            }
        }
        ans.push_back(i);
        return ans;
    }
};