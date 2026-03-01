class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans; int j=0;
        n=*max_element(target.begin(),target.end());
        for (int i=1;i<=n;i++){
            if(target[j]!=i){
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            }
            else{
                  ans.emplace_back("Push");
                  j++;
            }
            
        }
        return ans;
        
    }
};