class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();
        int z= pow(2,n);
        vector<vector<int>>ans;
        for(int i=0;i<z;i++){
            
           string r= bitset<16>(i).to_string();
           vector<int>a={};
            string l= r.substr((16-n),n);
           for(int j=0;j<n;j++){
               if(l[j]=='1'){
                   a.push_back(nums[j]);
               }
           }
           ans.push_back(a);

        }
        return ans;


    }
};