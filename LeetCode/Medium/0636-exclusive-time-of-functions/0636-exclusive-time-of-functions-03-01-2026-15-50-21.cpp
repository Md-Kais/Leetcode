class Solution {
public:
    vector<string> split(const string& s, char delimiter) {
        vector<string> tokens;
        string token;
        istringstream tokenStream(s);
        while (getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }
   vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);
        stack<int> st;          
        int prevTime = 0;     

        for (const string& e : logs) {
            vector<string> s = split(e, ':'); 
            int id = stoi(s[0]);
            string type = s[1];
            int t = stoi(s[2]);

            if (type == "start") {
                if (!st.empty()) {
                    ans[st.top()] += t - prevTime;   
                }
                st.push(id);
                prevTime = t;
            } else {
                ans[st.top()] += t - prevTime + 1;  
                st.pop();
                prevTime = t + 1;                  
            }
        }
        return ans;
    }
};