class Solution
{
public:
    bool isPowerOfFour(int n)
    {
         //  if(n<=0) return false;
        
//             double check = log2(n)/2;
//             cout<<check;

//         return check==(int)check;
      if(n==0) return false;
        else{
              int rightmost_bit = 32 - __builtin_clz(n);
        if (__builtin_popcount(n) == 1)
        {
            if(rightmost_bit % 4 ==1 || rightmost_bit % 4==3){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
        }
    }
};
