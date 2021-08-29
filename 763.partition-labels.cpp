/*
 * @lc app=leetcode id=763 lang=cpp
 *
 * [763] Partition Labels
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> v;
        string h = s;
        set<char> st;
        reverse(h.begin(), h.end());
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
        }
        map<char, pair<int, int>> p;
        map<int, int> r;
        for (auto e : st)
        {
            cout<<e<<" ";
            size_t found1 = s.find(e);
            size_t found2 = s.length() - h.find(e)-1;
            p.insert({e, {found1, found2}});
            r.insert({found2, found1});
        }
        int mini = INT_MAX - 1;
        int maxi = -1;
        vector<int> ans;
        for (int i=0;i<s.length();)
        {
            // cout << e.second.first << " " << e.second.second << endl;
            char g=s[i];auto itr=p.find(g);
            mini = min(mini, itr->second.first);
            maxi = max(maxi, itr->second.second);
            int j=i;
            while(i<maxi){
                char g = s[i];
                itr = p.find(g);
                if(maxi<itr->second.second){
                    g=s[i];
                    maxi = max(maxi, itr->second.second);
                }
                i++;
               // mini = min(mini, itr->second.first);
                
            }
            ans.push_back(i-j+1);
            i++;
        }
        // if (mini != INT_MAX - 1 && maxi != -1)
        // {
        //     ans.push_back(maxi - mini + 1);
        // }
        return ans;
    }
};
// @lc code=end
