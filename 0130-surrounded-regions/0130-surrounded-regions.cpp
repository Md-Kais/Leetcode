class Solution {
public:
    int ROW, COL;
    int dRow[4] = {0, 1, 0, -1};
    int dCol[4] = {-1, 0, 1, 0};

    bool isValid(const vector<vector<bool>>& vis, int row, int col) {
        if (row < 0 || col < 0 || row >= ROW || col >= COL)
            return false;
        if (vis[row][col])
            return false;
        return true;
    }

    void DFS(int sr, int sc, const vector<vector<char>>& board,
             vector<vector<bool>>& vis, vector<vector<char>>& ans) {
        cout << sr << " " << sc << endl;

        stack<pair<int, int>> st;
        st.push({sr, sc});

        while (!st.empty()) {
            auto [row, col] = st.top();
            st.pop();

            if (!isValid(vis, row, col))
                continue;

            vis[row][col] = true;
            ans[row][col] = 'O';

            for (int i = 0; i < 4; i++) {
                int adjx = row + dRow[i];
                int adjy = col + dCol[i];

                if (adjx >= 0 && adjy >= 0 && adjx < ROW && adjy < COL) {
                    if (board[adjx][adjy] == 'O' && !vis[adjx][adjy]) {
                        st.push({adjx, adjy});
                    }
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty())
            return;

        ROW = (int)board.size();
        COL = (int)board[0].size();
        //   cout<<"acc";
        vector<vector<char>> ans(ROW, vector<char>(COL, 'X'));
        vector<vector<bool>> vis(ROW, vector<bool>(COL, false));

        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {

                if (board[i][j] == 'O' &&
                    ((i == 0 || j == 0) || (i== ROW-1 || j == COL-1 ))) {
                    cout << i << " " << j << endl;

                    DFS(i, j, board, vis, ans);
                }
            }
        }

        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) { // ✅ fixed comma typo
                board[i][j] = ans[i][j];
            }
        }
    }
};