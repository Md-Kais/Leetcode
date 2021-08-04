class Solution {
public:
    
    bool solve(string s, int start,int end, int count){
            if(count>1){
                    return false;
                }
        while(start<=end){
           
                
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                return solve(s,start+1,end,count+1)|| solve(s,start,end-1,count+1);
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int start=0;
        int end=s.size()-1;
        
          
       return solve(s,start,end,0);
    }
};