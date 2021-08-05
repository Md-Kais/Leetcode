class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        long  long sum=0,cum=0;
        while(piles.size()>0){
            int max1=*max_element(piles.begin(),piles.end());
            auto itr=std::find(piles.begin(),piles.end(),max1);
            sum+=max1;
            piles.erase(itr);
            int max2 = *max_element(piles.begin(), piles.end());
            auto itr2 = std::find(piles.begin(), piles.end(), max2);
            cum += max2;
            piles.erase(itr2);
        }
        if(sum>cum){
            return true;
        }
        else{
            return false;
        }
    }
};