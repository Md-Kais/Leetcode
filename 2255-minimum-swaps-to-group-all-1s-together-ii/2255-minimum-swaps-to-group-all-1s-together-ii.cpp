class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k=0;
                int a = 0;
        int  n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1) k++;
        }

        for(int i=0;i<k;i++){
            if(nums[i] == 1) a++;
        }
        int ma = a;
        for(int i=k;i<n+k-1;i++){
            if(nums[i-k] == 1) {
                a--;
                ma= max(a,ma);
            }
            if(nums[(i%(n))] == 1) {
                a++;
                ma= max(a,ma);
            }
          
        }
        int mi = k - ma;
        return mi;


    }
};