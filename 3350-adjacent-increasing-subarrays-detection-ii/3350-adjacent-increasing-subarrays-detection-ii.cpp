class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        const int n = nums.size();
        int ans = 0;

        int prevRun = 0; 
        int curRun = 1;  

        for (int i = 1; i < n; ++i) {
            if (nums[i - 1] < nums[i]) {
                ++curRun;
            } else {

                ans = max(ans, curRun / 2);
                ans = max(ans, min(prevRun, curRun));

                prevRun = curRun;
                curRun = 1;
            }
        }

        ans = max(ans, curRun / 2);
        ans = max(ans, min(prevRun, curRun));

        return ans;
    }
};
