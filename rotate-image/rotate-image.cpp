class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();
        
    for(int r=0;r<n-1;r++){
       for(int c=r;c<(n-r-1);c++){
                int first = m[r][c];
                int second = m[c][n-r-1];
                int third = m[n-r-1][n-c-1];
                int fourth = m[n-c-1][r];
                                
                m[c][n-r-1] = first;
                m[n-r-1][n-c-1] =second;
                m[n-c-1][r]=third;
                m[r][c] = fourth;
            }
    }
    }
};