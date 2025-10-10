class Solution {
public:
    int maximumEnergy(vector<int>& energy, int K) {
        reverse(energy.begin(), energy.end());
        int len = energy.size();
        vector<int> possibleAns;
        vector<vector<int>> dp(K, vector<int>((len/K)+2, 0)); 

        for(int k=0; k<K; k++){   
            int j=1, maxDP=INT_MIN;
            for(int i=k; i<len; i+=K){
                dp[k][j] = dp[k][j-1]+energy[i];
                maxDP = max(dp[k][j], maxDP);
                cout<<maxDP<<endl;
                j++;
            }
            possibleAns.push_back(maxDP);
        }


        return *max_element(possibleAns.begin(), possibleAns.end());
    }
};
