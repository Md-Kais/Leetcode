class Solution {
public:
    int compress(vector<char>& chars) {
       vector<char>x;
       multiset<char>s;
       s.insert(chars[0]);
       int n= chars.size();
       for(int i=1;i<n;i++){
           if(chars[i]!=chars[i-1]){
               x.push_back(chars[i-1]);
               int xx= s.count(chars[i-1]);
               string sss= to_string(xx);
               if(xx>1){
                for(int i=0;i<sss.size();i++){
                    x.push_back(sss[i]);
                }
               }
               s.clear();
               s.insert(chars[i]);
           }
           else{
               s.insert(chars[i]);
           }
       }
       if(s.size()>=1){
            x.push_back(chars[n-1]);
               int xx= s.count(chars[n-1]);
               string sss= to_string(xx);
               if(xx>1){
                for(int i=0;i<sss.size();i++){
                    x.push_back(sss[i]);
                }
               }
               s.clear();
       }
    chars.clear();
    chars= x;
    return x.size();

    }
};