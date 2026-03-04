class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<pair<int,int>>s; int cI[100]={}; int cJ[100]={}; int ans=0;

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
               
                  s.push_back({i,j});
                  cI[i]++;cJ[j]++;

                    
                }
            }
        }
        for(auto e: s){
            if(cI[e.first]==1 && cJ[e.second]==1) ans++;
            
        }
        return ans;
        
        
    }
};