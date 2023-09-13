class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int a = INT_MAX;
        int b = INT_MAX;
        for(auto e: nums){
            if(a >= e){
                a = e;
            }
            else if(b >= e){
                b= e;
            }
            else{
                return true;
            }
        }
        return false;
    }
};