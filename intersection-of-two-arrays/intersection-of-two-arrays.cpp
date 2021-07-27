class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     
        std:: set<int>s1(nums1.begin(),nums1.end());
        std::set<int>s2(nums2.begin(),nums2.end());
        std::vector<int>v;
        for(auto e: s1){
            if(binary_search(s2.begin(),s2.end(),e)){
                v.push_back(e);
            }
        }
        return v;
    }
};