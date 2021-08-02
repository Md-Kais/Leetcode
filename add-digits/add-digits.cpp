class Solution {
public:
    
    int addDigits(int n) {
      int sum=0;
        while(n>0){
            
            sum+=n%10;
            n/=10;
           
        }
        n=sum;
          string bum=to_string(sum);
             if(bum.length()==1){
                return sum;
            }
     
              return addDigits(n);
       
        
      }
    
};