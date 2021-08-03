class Solution {
public:
    vector<char>ans;
    void reverseString(vector<char>& s) {
       if(s.size()==0){
          s=ans;
           return;
       }
        ans.push_back(s[s.size()-1]);
        s.pop_back();
        
        return reverseString(s);
    }
};