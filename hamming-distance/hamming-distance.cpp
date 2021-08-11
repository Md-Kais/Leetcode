class Solution {
public:
    int hammingDistance(int x, int y) {
        int b=x^y;
        bitset<32>z(b);
        //cout<<z.count()<<endl;
        return z.count();
    }
};