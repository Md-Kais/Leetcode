class Solution {
public:
    char findKthBit(int n, int k) {
        static constexpr int maxL=(1<<20)-1;
        bitset<maxL>b;
        for(int i=1;i<n;i++){
            int x=pow(2,i)-1;
            b.flip(x);
            int c=1;
            for(int j=x-1;j>=0;j--){
                if(!b.test(j)) b.flip(x+c);
                c++;
            }
        }
        // cout<<b<<endl;
        return b.test(k - 1) ? '1' : '0';
    }
};