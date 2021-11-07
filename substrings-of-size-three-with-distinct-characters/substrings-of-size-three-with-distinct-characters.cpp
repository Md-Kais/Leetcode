class Solution {
public:
    int countGoodSubstrings(string s) {
        int a[34]={};int ans=0;
        if(s.size()<3) return 0;
        for(int i=0;i<3;i++){
            a[s[i]-'a']++;
            
        }
        if(a[s[0]-'a']==1 && a[s[2]-'a']==1) ans++;
        
        for(int i=1;i<s.length()-2;i++){
            a[s[i-1]-'a']--;
            a[s[i+2]-'a']++;
            if(a[s[i]-'a']==1  && a[s[i+2]-'a']==1) ans++;
            
        }
        return ans;
    }
};