class Solution {
public:
    vector<int> sortedSquares(vector<int>& num) {
        vector<int>nums;
        for(auto e: num){
            nums.push_back(e*e);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};