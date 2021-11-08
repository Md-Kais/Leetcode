class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
           
        }
        double ma=sum;
        for(int i=1;i<=nums.size()-k;i++){
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            ma=max(sum,ma);
        }
        return ma/k;
    }
};