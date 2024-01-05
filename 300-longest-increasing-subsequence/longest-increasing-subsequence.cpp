class Solution {
public:
int lis(int arr[], int n)
{
    int lis[n];
 
    lis[0] = 1;
 
    // Compute optimized LIS values in
    // bottom up manner
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
 
    // Return maximum value in lis[]
    return *max_element(lis, lis + n);
}
    int lengthOfLIS(vector<int>& nums) {
        int arr[nums.size()+1];
        int i=0;
        for(auto e: nums){
            arr[i++]=e;
        }
        return lis(arr,nums.size());
     
    }
};