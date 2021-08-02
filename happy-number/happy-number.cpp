class Solution {
public:
    set<int>s;
    bool isHappy(int n) {
         int sum=0;
        while(n>0){
            int aaa=n%10;
            sum+=aaa*aaa;
            n/=10;
           
        }
        n=sum;
          if(s.count(n)==1) return false;
        s.insert(n);
      
        if(n==0) return false;
        if(sum==1){
            return true;
        }
   
       
        return isHappy(n);
        
    }
};