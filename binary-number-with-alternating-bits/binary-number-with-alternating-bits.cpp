class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>a(n);
        string h=a.to_string();
        int cut=__builtin_clz(n);
        string s=h.substr(cut,(32-cut));
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                return false;
               
            }
        }
        return true;
    }
};