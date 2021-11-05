class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i=1;vector<string>ans;
        while(i<=n){
            if(i%3==0 && i%5==0) ans.push_back("FizzBuzz");
            else if(i%3==0) ans.push_back("Fizz");
            else if(i%5==0) ans.push_back("Buzz");
            else ans.push_back(to_string(i));
            i++;
        }
         return ans;
    }
   
};