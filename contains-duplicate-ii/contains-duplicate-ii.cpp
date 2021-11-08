class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
        int i=0;
        for(auto e: nums){
            if(m.count(e)==1){
                    if(i-m[e]<=k){
                        return true;   
                    }
                 auto it = m.find(e);
                  m.erase(it);
            }
           
            m.insert({e,i});
            i++;
        }
        return false;
    }
};