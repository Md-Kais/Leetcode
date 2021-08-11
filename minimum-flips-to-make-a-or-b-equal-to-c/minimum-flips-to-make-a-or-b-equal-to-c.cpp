class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<32> x1(a);
        bitset<32> x2(b);
        bitset<32> x3(c);
        int res=0;
        for(int i=0;i<32;i++){
            if(x3[i]==0){//if c s' bit is zero then both bits of a and b must be zero
                if(x2[i]==1)
                    res++;
                if(x1[i]==1)
                    res++;
            }else{// if c s' bit is one then one of the bit must be one
                if(x2[i]==0&&x1[i]==0)
                    res++;
            }
        }
        return res;
    }
};