class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> a(nums.size() + 1);
        for (auto e : nums)
            a[e] = 1;
        for (int i = 1; i <= nums.size(); i++) {
            if (a[i] != 1) {
                ans.emplace_back(i);
            }
        }
        return ans;
    }
};