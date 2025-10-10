
## 🧠 Intuition

We can start at any index in the array, but to successfully finish, we must reach or go beyond the end of the array using jumps of size `K`. Our goal is to maximize the total magic energy collected by the time we "exit" the array.

Instead of solving the problem from the beginning, we flip the problem: we **reverse the array** and calculate how much energy we could have collected **if we ended at some point**.

---

## 🔍 Approach

Here's how we solve it step by step:

1. **Reverse the array** so that we work from the end toward the beginning. This makes it easier to simulate collecting energy in steps of size `K`.
2. For each possible starting offset `k` in the range `[0, K-1]`, we:

   * Traverse the reversed array by jumping `K` steps at a time, starting from index `k`.
   * Use a **prefix sum** to keep track of energy collected at each jump.
   * Track the **maximum energy collected** for that path.
3. Store the maximum energy collected for each `k`.
4. Return the highest value among them — this is the best path we could’ve taken.

---

## ⏱️ Time Complexity

* **Time:** `O(n)` — We visit each element of the array once.
* **Space:** `O(n/K)` — For each of the `K` paths, we store prefix sums. Overall space is still linear in terms of input size.

---

## ✅ Code

Here’s the same code you provided, just with a bit of cleanup for clarity:

```cpp
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int K) {
        reverse(energy.begin(), energy.end());
        int len = energy.size();
        vector<int> possibleAns;
        vector<vector<int>> dp(K, vector<int>((len / K) + 2, 0)); 

        for (int k = 0; k < K; k++) {   
            int j = 1;
            int maxDP = INT_MIN;

            for (int i = k; i < len; i += K) {
                dp[k][j] = dp[k][j - 1] + energy[i];
                maxDP = max(dp[k][j], maxDP);
                j++;
            }

            possibleAns.push_back(maxDP);
        }

        return *max_element(possibleAns.begin(), possibleAns.end());
    }
};
```

