class Solution {
public:
    string addStrings(string s, string t) {
        reverse(s.begin(),s.end());reverse(t.begin(),t.end());
        if(t.length()>s.length()) {
            string temp=t;
            t=s;
            s=temp;
            
        }
        cout<<s<<" "<<t<<endl;
        int c=0;string ans;
        for(int i=0;i<s.length();i++){
            int x=s[i]-'0';int y;
            if(t.length()-1<i){
                y=0;
            }
            else{
                y=t[i]-'0';
            }
            int an=x+y+c;cout<<an<<endl;
            if((an>=10)){
             
               // an+=c;
                ans+=(an-10)+'0';
                   c=1;
            }
            else{
                ans+=(an)+'0';
                c=0;
            }
        }
        if(c==1) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};