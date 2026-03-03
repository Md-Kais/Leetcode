class Solution {
public:
    int bulbSwitch(int n) {

        int ans = 0;
        for (float i = 1; i <= sqrt(n); i++) {
            float x = sqrt(i);
            if (x = (int)x)
                ans++;
        }
        return ans;
    }
};