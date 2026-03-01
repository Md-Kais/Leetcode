class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int prog=arr[1]-arr[0];
        for(auto i=1;i<arr.size();i++){
            int x=arr[i]-arr[i-1];
            if(prog!=x) return false;
        }
        return true;
    }
};