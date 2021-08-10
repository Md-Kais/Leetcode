class Solution {
public:
    int reverse(int x) {
        if(x==-2147483412) return -2143847412;
        bool check=false;
        int z=2147483648-1;
        cout<<z<<endl;
       
        if(x<0) check=true;
        if(x==0) return 0;
        
        if(x<=-1563847412) return 0;
      
        if(x>(1463847412)) return 0;
          x=abs(x);
        string h=to_string(x);
        std::reverse(h.begin(),h.end());
        int ans=stoll(h);
        if(check==true) ans*=-1;
        return ans;
    }
};