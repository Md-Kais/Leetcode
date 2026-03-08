class Solution {
public:
    int minFlips(string s) {

        int n = s.size();
        string str = s+s;

        string s1="";
        string s2="";

        for(int i=0;i<2*n;i++)
        {
            if(i%2==0){
                s1+="0";s2+="1";
            }else{
                s1+="1";s2+="0";
            }
        }

        int ans = 1e9;
        int d1=0,d2=0;
        int l=0;
        for(int r=0;r<2*n;r++)
        {
            if(str[r]!=s1[r]) d1++;
            if(str[r]!=s2[r]) d2++;

            if(r-l+1>n){
                if(str[l]!=s1[l]) d1--;
                if(str[l]!=s2[l]) d2--;
                l++;
            }

            if(r-l+1==n){
                ans = min({ans,d1,d2});
            }
        }

        return ans;
        
    }
};