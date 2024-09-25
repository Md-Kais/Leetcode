class Solution {
     const long long int MOD = 1e10+7;
public:
    int numTrees(int n) {

        double x =1;
        for(double i=2;i<=n ;i++){
            x*= (n+i)/i;
           
           
        }
        cout<<fixed<<x<<endl;
      int y = (int)(x + 0.5); // This will round to the nearest integer

        return y ;

    }
};