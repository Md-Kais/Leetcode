class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int count = 0, lastI = 0, fastI = 0,clinc=0;bool com=false;
        if (k == 1 & nums.size() >= 2)
            return true;

        for (int i = 0; i < nums.size(); i++) {
            int inc = 0;
            fastI = lastI;
            for (; i + 1 < nums.size();) {
                cout << "Look" << i << endl;
                if (nums[i] < nums[i + 1]) {
                    i++;
                    cout << "back" << i << endl;
                    inc++;
                } else {
                    if (inc > k - 1) {
                        lastI = i;
                    }
                    break;
                }

                if (inc >= k - 1) {
                    
                    
                    
                    if (i == lastI + k && com) {

                        cout << i << lastI << endl;

                        return true;
                    }
                    if (inc == k - 1){
                        cout<<i<<endl;
                        count++;
                        com=true; lastI = i;
                    }
                   
                        
                }
                if (count == 2 && lastI - fastI == k){
                    cout << lastI<<" " << fastI << endl;
                    return true;
                }
                    
            }
        }
        return false;
    }
};