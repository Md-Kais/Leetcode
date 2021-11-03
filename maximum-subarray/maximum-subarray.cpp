class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maximum=INT_MIN;
        int cum=0;
        for(auto e: nums){
            sum+=e;
             maximum=max(maximum,sum);
                        sum=max(sum,0);


            
        }
        return maximum;
    }
};