class RandomizedSet {
public:
    /** Initialize your data structure here. */
    set<int>s;
    RandomizedSet() {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.count(val)==0){
            s.insert(val);
            return true;
        }
        else{
            return false;
        }
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
         if(s.count(val)==1){
           auto it=s.find(val);
            s.erase(it);
            return true;
        }
        else{
            return false;
        }
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        vector<int>nums(s.begin(),s.end());
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */