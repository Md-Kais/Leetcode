class Solution {
public:
    int maxRepeating(string sequence, string word) {
       int res=0;
        string aux=word;
        while(sequence.find(aux)!=string::npos){
            res++;
            aux+=word;
        }
        return res;
    }
};