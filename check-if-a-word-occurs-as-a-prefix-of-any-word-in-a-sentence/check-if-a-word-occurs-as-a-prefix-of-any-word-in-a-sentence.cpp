class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        vector<string>v;
        while(ss>>word){
            v.push_back(word);
        }
        int j=1;
        for(auto e: v){
            size_t found=e.find(searchWord);
            cout<<found<<endl;
           
            if(found==0){
                return j;
            }
            j++;
        }
        return -1;
    }
};