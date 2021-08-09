class Solution {
public:
    long long a[50];
    int climbStairs(int n) {
        a[1]=1;
        a[2]=2;
        for(int i=3;i<=45;i++){
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];
    }
};