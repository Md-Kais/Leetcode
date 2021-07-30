class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       vector<vector<int>> v;
   int i=0;
    do
    {
        vector<int> a;

        for (auto e : nums)
        {
            a.push_back(e);
        }
    i++;
        if(i==3) break;
        v.push_back(a);
    } while (next_permutation(nums.begin(), nums.end()));
    
        int j=0;
    if(v.size()>1){
        for (auto e : v[1])
        {
           nums[j]=e;
            j++;
        }
    
    }
    else{
        sort(nums.begin(),nums.end());
        for(auto e: nums){
            cout<<e<<" ";
        }
    }
    }
};