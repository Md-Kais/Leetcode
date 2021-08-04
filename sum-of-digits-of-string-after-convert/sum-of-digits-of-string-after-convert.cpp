class Solution {
public:
  
    int getLucky(string s, int k) {
        string maina;
        for(int i=0;i<s.length();i++){
            int ss=(s[i]-'0')-48;
            string as=to_string(ss);
           // cout<<as<<" ";
            maina+=as;
        }
      // cout<<maina<<endl;
        for(int j=0;j<k;j++){
        int sum=0;
        for(int i=0;i<maina.length();i++){
            sum+=maina[i]-'0';
        }
        maina=to_string(sum);
          //  cout<<maina<<endl;
        }
     stringstream x(maina);
        int ans=0;
        x >> ans;
        return ans;
    }
};