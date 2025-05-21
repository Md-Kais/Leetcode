class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n= matrix.size();
        set<int>x;
        set<int>y;
        for(int i=0;i<n;i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<matrix[i].size();j++){
               if(x.count(i)==1){
                 matrix[i][j]=0;
               }
               else if(y.count(j)==1){
                matrix[i][j]=0;
               }
            }
        }
    }
};