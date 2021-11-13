class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //using two pointer tech
        int on=m-1,two=n-1,i=nums1.size()-1;
        while(two>=0) {
            if(on>=0 && nums1[on]>=nums2[two]){
                nums1[i--]=nums1[on--];
            }
            else{
                  nums1[i--]=nums2[two--];
            }
        }
    }
};
