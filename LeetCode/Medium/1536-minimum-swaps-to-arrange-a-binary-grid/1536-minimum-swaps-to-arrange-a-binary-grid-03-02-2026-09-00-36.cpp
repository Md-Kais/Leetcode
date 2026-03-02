class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int row = grid.size();
        vector<int> zero(row);
        set<int, greater<int>> chk;
        int col = grid[0].size();
        for (int i = 0; i < row; i++) {
            int z = 0;
            for (int j = col - 1; j > 0; j--) {
                if (grid[i][j] == 0) {
                    z++;
                } else {

                    break;
                }
            }
            zero[i] = z;
        }
        int swaps = 0;
        int n = row;

        for (int i = 0; i < n; i++) {
            int need = n - 1 - i;
            int j = i;

            while (j < n && zero[j] < need) {
                j++;
            }

            if (j == n)
                return -1;

            while (j > i) {
                swap(zero[j], zero[j - 1]);
                swaps++;
                j--;
            }
        }

        return swaps;
    }
};