class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        multimap<int,int>a;
      for(int i=0;i<nums.size();i++) a.insert({nums[i],a.count(nums[i])+1});
        sort(nums.begin(),nums.end());
        int ans=0;
        auto last=unique(nums.begin(),nums.end());
        nums.erase(last,nums.end());
        for(int i=0;i<nums.size();i++){
          if(k==0){
             
                // ans+=min(kk,a.count(nums[i]+k)-1);
              if(a.count(nums[i])>1){
                  ans+=1;
              }
          }
            else{
                 // ans+=min(a.count(nums[i]),a.count(nums[i]+k));
                if(a.count(nums[i]+k)>=1){
                  ans+=1;
              }
            }
        
        }
        return ans;
    }
};