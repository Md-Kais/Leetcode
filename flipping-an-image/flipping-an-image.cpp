class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(auto e: image){
            reverse(e.begin(),e.end());
            for(int i=0;i<e.size();i++){
                if(e[i]==0) e[i]=1;
                else e[i]=0;
            }
            ans.push_back(e);
        }
        
        return ans;
       
    }
};