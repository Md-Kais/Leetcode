class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>s;
        multiset<int>m1;
        multiset<int>m2;
        for(auto e: matches){
          s.insert(e[0]);
          s.insert(e[1]);
          m1.insert(e[0]);
        //   m1.insert(e[1]);
        //   m2.insert(e[0]);
          m2.insert(e[1]);

        }
        vector<vector<int>>ans;
        vector<int>ans1;
        vector<int>ans2;
        for(auto e: s){
            if(m1.count(e) >0 && m2.count(e)==0){
                ans1.push_back(e);
            }
            if(m2.count(e)==1){
                ans2.push_back(e);
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }
};