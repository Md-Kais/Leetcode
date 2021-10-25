class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int a[100007]={0};
        for(auto e:nums){
             a[e]++;
            if(a[e]==2){
                ans.push_back(e);
            }
           
        }
        return ans;
    }
};