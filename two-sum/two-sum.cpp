class Solution {
public:
   
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int,int>m;
        int i=0;
        
        for(auto e: nums){
            m.insert({e,i});
            i++;
        }
        sort(nums.begin(),nums.end());
        vector<int>v;
       int start=0;
       int end=nums.size()-1;
       
        
        while(start<end){
            if(nums[start]+nums[end]==target){
                   auto it = m.find(nums[start]);
                    v.push_back(it->second);
                    m.erase(it);
                        it = m.find(nums[end]);
                     v.push_back(it->second);
            
            }
            if(nums[start]+nums[end]<target){
                start++;
            }
            else{
                end--;
            }
        }
        return v;
       
      
    }
};
