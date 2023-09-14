class Solution {
public:
    string reverseWords(string s) {
        stringstream sss(s);
        string word;
        stack<string>ss;
        while(sss >> word){
            ss.push(word);
        }

        string ans;
        while(!ss.empty()){
            string x = ss.top();
            ans += x;
            
            ans += " ";
            // ans+=" ";
            ss.pop();
        }
        ans.erase(ans.size()-1);
       return ans;
    }
};