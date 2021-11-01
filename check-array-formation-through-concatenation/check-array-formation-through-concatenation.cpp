class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
    vector<int>res;map<int ,vector<int>>m;
        for(auto a: pieces){
                m.insert({a[0],a});
        }
        for(auto e: arr){
            if(m.count(e)==1){
                res.insert(res.end(),m[e].begin(),m[e].end());
            }
        }
        return res==arr;
    }
};