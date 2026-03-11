class Solution {
public:
    int bitwiseComplement(int n) {
        bitset<32>b(n);
        int x=0;
        for(int i=31;i>=0;i--){
           if(b.test(i)) { x= i; break;}
        }
        for(int i=x;i>=0;i--) b.flip(i);
        return static_cast<int>(b.to_ulong());
    }
};