class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        set<int> s;
        multiset<int> m;
        vector<int> v;
        for (auto e : nums)
        {
            s.insert(e);
            m.insert(e);
        }
        for(auto e: s){
            if(m.count(e)==1) v.push_back(e);
        }
        return v;
    }
   
};