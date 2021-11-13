class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int start=0;
        int end=n.size()-1;vector<int>v;
        while(start<end){
            if(n[start]+n[end]==target){
                v.push_back(start+1);v.push_back(end+1);
                return v;
            }
            else if(n[start]+n[end]<target){
                start++;
            }
            else{
                end--;
            }
        }
        return v;
    }
};