class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        int siz=A.size();
        sort(A.begin(),A.end());
        if(siz<3) return {};
        vector<vector<int>>ans;
        
        for(int i=0;i<siz-2;i++){
            if(A[i]>0) break; //
            if(i>0 && A[i]==A[i-1]) continue;
            int start=i+1;int end=siz-1;
            while(start<end){
                if(A[start]+A[end]+A[i]<0) start++;
                else if(A[start]+A[end]+A[i]>0) end--;
                else{
                    ans.push_back(vector<int>{A[start],A[end],A[i]});
                    while(start<end && A[start]==A[start+1]) start++;
                    while(start<end && A[end]==A[end-1]) end--;
                    start++,end--;
                }
            }
            
        }
        return ans;
    }
};