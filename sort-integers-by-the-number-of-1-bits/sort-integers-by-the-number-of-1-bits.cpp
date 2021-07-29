class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        multimap<int,int>m;
        sort(arr.begin(),arr.end());
        for(auto e: arr){
            int setbit=__builtin_popcount(e);
            m.insert({setbit,e});
        }
        vector<int>ans;
        for(auto e: m){
            ans.push_back(e.second);
        }
       
        return ans;
    }
};