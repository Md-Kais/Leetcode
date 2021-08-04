class Solution {
public:
    //vector<int>ans;
    vector<int> mostCompetitive(vector<int>& a, int k) {
       // int io=0; cout<<nums.size()<<endl;
        // for(int i=0;i<k;i++){
        //     int siz=nums.size();
        //     int mini=*min_element(nums.begin()+io,nums.begin()+(siz-k+i+1));
        //     ans.push_back(mini);
        //     auto is=std::find(nums.begin()+io,nums.end(),mini);
        //     io=is-nums.begin()+1;
        // }
        
    stack<int> s;
    int n=a.size();
    
    for(int i=0; i<n; i++)
    {
        if(s.empty()|| a[i]<s.top() || s.size()<k)
        {
            while(!s.empty() && a[i]<s.top() && s.size()+n-i-1>=k)
                s.pop();
            s.push(a[i]);
        }
    }
    
    vector<int> res;
    while(!s.empty())
    {
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(), res.end());
    
    return res;
    }
};