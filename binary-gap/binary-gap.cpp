class Solution {
public:
    int binaryGap(int n) {
        bitset<32>b(n);
       string h= b.to_string();
        cout<<b<<endl;
        
        int a=__builtin_clz(n);
       /// cout<<a<<endl;
 
        int z=a;
        int ans=-1;
        for(int i=a;i<32;i++){
          //  cout<<h[i]<<" ";
          //  cout << typeid(b[i]).name() << endl;
            if(h[i]=='1'){
                ans=max((i-z),ans);
                cout<<z<<" "<<ans<<endl;
                z=i;
                
            }
        }
        return ans;
        
    }
};