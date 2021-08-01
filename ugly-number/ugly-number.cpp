class Solution {
public:
    bool isUgly(int n) {
        vector<int>v={2,3,5};
        if(n==0) return false;
  
        for(auto e: v){
            while(n%e==0){
                n/=e;
            }
        }
        if(n==1) return true;
        else return false;
    }
};