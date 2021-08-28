class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int erased=nums1.size()-m;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        for(auto e: nums1) cout<<e<<" ";
    
        cout<<erased<<endl;
        auto zero=std::find(nums1.begin(),nums1.end(),0);
        nums1.erase(zero,zero+erased);
        
    }
};