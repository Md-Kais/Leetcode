class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int m= word1.size();
        int n= word2.size();
        int x= min(m,n);
        string ans="";
        while(x--){
            ans+=word1[i];
            ans+=word2[i];
            i++;
                    }
        for(int j=i;j<m;j++){
            ans+=word1[j];
           
        }
         for(int j=i;j<n;j++){
             ans+=word2[j];
           
        }

        return ans;
    }
};