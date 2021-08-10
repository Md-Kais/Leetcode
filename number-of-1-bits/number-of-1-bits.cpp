class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        long long int t=n;
        int count = 0;
        while(t!=0){
          t &= (t-1);
            count++;
        }
        return count;
    }
};