class Solution {
public:
    int maxScore(string s) {
        int n=s.length();
        int left=0;
        int zer = 0,one = 0;
        for(int e=0;e<n;e++){
            if(s[e]=='1'){
                one++;
            }
        }
        int ans= INT_MIN;
        while(left<n-1){
            if(s[left]=='0'){
                zer+=1;
            }
            if(s[left]=='1'){
                one-=1;
            }
            int temp=one+zer;
            ans=max(temp,ans);
            left++;
        }
        return ans;
    }
};