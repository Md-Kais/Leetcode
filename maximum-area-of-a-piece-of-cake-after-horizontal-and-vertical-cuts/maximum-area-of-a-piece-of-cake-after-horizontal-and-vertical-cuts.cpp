class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontal, vector<int>& verticalCuts) {
        horizontal.push_back(0);
        horizontal.push_back(h);
        verticalCuts.push_back(0);
        long long MOD=1e9+7;
        verticalCuts.push_back(w);
        sort(horizontal.begin(),horizontal.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int ans=0;    long long int ans2=0;
      long long  int ma=-1;
       long long  int mav=-1;
        for(int i=0;i<horizontal.size()-1;i++){
            ma=horizontal[i+1]-horizontal[i];
            ans=max(ma%MOD,ans%MOD);
        }
        for(int i=0;i<verticalCuts.size()-1;i++){
            mav=verticalCuts[i+1]-verticalCuts[i];
            ans2=max(mav%MOD,ans2%MOD);
        }
        return (ans*ans2)%MOD;
    }
};