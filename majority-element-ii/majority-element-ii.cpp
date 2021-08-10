class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        multiset<int>m(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        int ma=nums.size()/3;
        for(auto e: s){
            if(m.count(e)>ma) ans.push_back(e);
        }
        return ans;
    }
};