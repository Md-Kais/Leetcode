
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        set<int> s;
        multiset<int> m;
        int ans;
        for (auto e : nums)
        {
            s.insert(e);
            m.insert(e);
        }
        for (auto e : s)
        {
            if (m.count(e) == 1)
            {
               ans=e;
            }
        }
        return ans;
    }
};