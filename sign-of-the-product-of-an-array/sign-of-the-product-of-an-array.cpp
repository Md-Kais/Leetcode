class Solution {
public:   
    int count=0;bool zero=false;
    int arraySign(vector<int>& nums) {
        if(nums.size()==0){
            if(zero==true) return 0;
            else if(count & 1) {
                return -1;
            }
            else{
                return 1;
            }
        }
        int a=nums[0];nums.erase(nums.begin()+0);
        if(a==0) zero=true;
        else if(a<0) count++;
        return arraySign(nums);
        
    }
};