class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;int  ma=-1;
        for(int i=0;i<intervals.size()-1;){
            int j=i+1;int sex=-1;
            while(j<intervals.size() && intervals[i][1]>=intervals[j][0]){
              sex=max(intervals[i][1],intervals[j][1]);
                intervals[i][1]=sex;  j++;ma=sex;
            }
         
            vector<int>v;
            v.push_back(intervals[i][0]);
            v.push_back(intervals[i][1]);
            ans.push_back(v);
          
            i=j;
        }
       
        if(intervals.size()>1){
             int end=intervals.size()-1;
        if(ma<intervals[end][0]){
            vector<int>v;
            v.push_back(intervals[end][0]);
            v.push_back(intervals[end][1]);
            ans.push_back(v);
        }
              return ans;
        }
        return intervals;
      
    }
};