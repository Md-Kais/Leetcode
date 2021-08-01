class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long int>s;
       
        s.insert(1);
        long long int ans=*s.begin();
        while(n>1){
            ans=*s.begin();
            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
            s.erase(*s.begin());
            n--;
        }
         ans=*s.begin();
        return ans;
//         vector<int>v={2,3,5};long long int  i=1;
       
//          for(int i=1;;i++){
//              int va=i;
//             if(i%2==0 || i%3==0 || i%5==0){
//                 n--;
//             }
//               if(n==0){
//                  return i;
//              }
//              for(int j=0;j<3;j++){
//                 while(va%v[j]==0){
//                     va/=v[j];
//                 }
//             }
//             if(va==1) n--;
//              cout<<va<<endl;
             
//          }
            
        
//         return i;
    }
};