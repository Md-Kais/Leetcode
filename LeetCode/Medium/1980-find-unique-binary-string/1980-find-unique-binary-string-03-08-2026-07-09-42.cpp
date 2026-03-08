class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<int> s;
        unsigned long n = nums[0].length();
        unsigned long find = 0;
        for (auto e : nums) {
            bitset<16> b(e);
            s.insert(b.to_ulong());
            find = max(find, b.to_ulong());
        }
        int i = 0;
        string ans;
        unsigned long num = 0;
        if ((find) < (1 << n) - 1)
            num = (1 << n) - 1;
        if (num == 0) {
            for (auto e : s) {
                if (e != num) {
                    break;
                }
                num++;
            }
        }
        bitset<16> bn(num);
        ans = bn.to_string();
        return ans.substr(16-n);
    }
};