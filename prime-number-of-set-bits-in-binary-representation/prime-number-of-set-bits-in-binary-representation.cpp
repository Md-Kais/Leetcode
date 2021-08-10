class Solution {
public:
 
    int countPrimeSetBits(int left, int right) {
        set<int>primes={2,3,5,7,11,13,17,19,23,29,31,37};
        int ans=0;
        for(auto e: primes) cout<<e<<endl;
        for(int i=left;i<=right;i++){
            bitset<32>b(i);
            int aa=b.count();
            if(primes.count(aa)==1) ans++;
        }
        return ans;
    }
};