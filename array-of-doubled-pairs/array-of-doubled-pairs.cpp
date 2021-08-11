class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       unordered_map<int,int>freq;
        for(auto e: arr){
            freq[e]++;
        }
        for(auto e: arr){
            if(freq[e] && freq[2*e]){
                freq[e]--;
                freq[2*e]--;
            }
        }
        for(auto [a,b] : freq){
            cout<<a<<b<<endl;
            if(b>0) return false;
        }
    return true;
    }
};