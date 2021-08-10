class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*
        class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(auto e: grid){
           for(auto u: e){
               if(u<0){
                   ans++;
               }
           }
        }
        return ans;
        ///faster than the binary search one
        
    }
};
        
        
        */
        
      
        
        int ans=0;
        for(auto e: grid){
            reverse(e.begin(),e.end());
            int x=lower_bound(e.begin(),e.end(),0)-e.begin();
            ans+=x;
          
        }
        return ans;
        
    }
};