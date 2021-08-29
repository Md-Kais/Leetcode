class Solution {
public:
     int a[22222]={0};
    int removeDuplicates(vector<int>& nums) {
       
        vector<int>ans;
        for(auto e: nums){
            int x=e;
            if(e<0) x=abs(e)+1234;
            cout<<x<<endl;
            if(a[x]==0){
                ans.push_back(e);
                a[x]=1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<ans.size()){
                nums[i]=ans[i];
            }
            else{
                nums[i]= NULL;
            }
        }
        return ans.size();
    }
};