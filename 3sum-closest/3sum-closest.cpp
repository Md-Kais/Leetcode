class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();  int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
       //     if(i> 0 && nums[i]==nums[i+1]) continue;
            int l=i+1;
            int r=n-1;
          
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
               if(sum==target) return target;
                  if(abs(target-sum)<abs(target-ans)) ans=sum;
                if(sum>target) {
                r--;
                }
                else{
                 
                 l++;
                }
            }
        }
        return ans;
    }
};