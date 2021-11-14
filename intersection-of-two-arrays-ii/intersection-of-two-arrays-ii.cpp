class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;int n=nums1.size()-1;int m=nums2.size()-1;
        int j=max(n+1,m+1);
        int k=0;
        while(i<j){
            cout<<i<<" "<<k<<endl;
            if(nums1[i]==nums2[k]){
                v.push_back(nums1[i]);
                i++;
                k++;
            }
            else if(nums1[i]<nums2[k]){
                i++;
            }
            else if(nums1[i]>nums2[k]){
                k++;
            }
            if(i>n || k>m){
                return v;
            }
        }
           
        
    return v; 
    }
};