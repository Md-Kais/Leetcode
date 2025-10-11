class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        if (power.empty()) return 0;

        long long total = 0;
        unordered_map<long long,long long> cnt;
        set<long long> uniq;
        for (int x : power) {
            total += x;
            ++cnt[x];
            uniq.insert(x);
        }

        vector<long long> a(uniq.begin(), uniq.end());
        int m = (int)a.size();
        vector<long long> w(m);
        for (int i = 0; i < m; ++i) w[i] = a[i] * cnt[a[i]];

      
        vector<long long> pref(m + 1, 0);
        for (int i = 0; i < m; ++i) pref[i + 1] = pref[i] + w[i];


        vector<int> prev(m, -1);
        int j = -1;
        for (int i = 0; i < m; ++i) {
            while (j + 1 < i && a[j + 1] <= a[i] - 3) ++j;
            prev[i] = j;
        }

        vector<long long> dp(m, 0);
        for (int i = 0; i < m; ++i) {
            long long remove_i = (i ? dp[i - 1] : 0) + w[i];
            long long keep_i = (prev[i] >= 0 ? dp[prev[i]] : 0)
                             + (pref[i] - pref[prev[i] + 1]); 
                             
            dp[i] = min(remove_i, keep_i);
        }

        long long minSubtract = dp[m - 1];
        return total - minSubtract;
    }
};
