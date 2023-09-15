class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0, r=t.size()-1, z=s.size()-1, y=0,check=0;
        while(l<=r && (y>=0) && (z>=0)){
            if(t[l]==s[y]){
                l++;
                y++;
                check++;
            }
            else if(t[l]!=s[y]){
                l++;
            }
            if(t[r]==s[z] && (l-1)!=r){
                z--;
                r--;
                check++;
            }
            else if(t[r]!=s[z]){
               
                r--;
            }
        }
        if(check >= s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};