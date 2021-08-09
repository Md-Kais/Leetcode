class Solution {
public:
    int a[39];
    int tribonacci(int n) {
        a[0]=0;a[1]=1;a[2]=1;
        for(int i=3;i<=37;i++){
            a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        return a[n];
    }
};