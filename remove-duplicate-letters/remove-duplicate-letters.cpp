class Solution {
public:
    string removeDuplicateLetters(string s) {
        int last_index[261];
        bool seen[261]={false};
        stack<int>seq;
        for(int i=0;i<s.length();i++){
            last_index[s[i]-'a']=i;
        }
        for(int i=0;i<s.length();i++){
            int c=s[i]-'a';
            if(seen[c]) continue;
            while(!seq.empty() && seq.top()>c && i<last_index[seq.top()]){
                seen[seq.top()]=false;
              seq.pop();
            }
              seq.push(c);
                seen[c]=true;
        }
      
        string ans;
        while(!seq.empty()){
            ans+=seq.top()+'a';
            seq.pop();
        }
     reverse(ans.begin(),ans.end());
        return ans;
        
    }
};