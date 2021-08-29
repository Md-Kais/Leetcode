class Solution {
public:
    vector<vector<int>> generate(int n) {
       vector<vector<int>>a(31,vector<int>(31,0));
        vector<vector<int>>pascal;
        for(int i=0;i<n;i++){
            vector<int>v;
            if(i==0){
                v.push_back(1);
                a[0][0]=1;
            }
            else{
                v.push_back(1);a[i][0]=1;
                if(i>1) {
                    for(int j=1;j<i;j++){
                        v.push_back(a[i-1][j-1]+a[i-1][j]);
                        a[i][j]=a[i-1][j-1]+a[i-1][j];
                    }
                }
                v.push_back(1);a[i][i]=1;
            }
            pascal.push_back(v);
        }
        return pascal;
    }
};