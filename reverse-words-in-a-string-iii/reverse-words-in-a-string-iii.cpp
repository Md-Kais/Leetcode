class Solution {
public:
    string ans;
    vector<string>v;
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word) {
            reverse(word.begin(),word.end());
            v.push_back(word);
        }
        int i=0;
        for(auto e: v){
            if(i==0){
                ans+=e;
            }
            else if(i<v.size()){
                ans+=" ";
                ans+=e;
            }
            i++;
        }
        return ans;
        
    }
};