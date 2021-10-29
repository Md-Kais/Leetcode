class Solution {
public:
    int maxArea(vector<int>& height) {
         int i=0,j=height.size()-1;
        int ans=-1;
     while(i<j) {
         if(height[i]<height[j]){
             ans=max(ans,(min(height[i],height[j])*(j-i)));
             i++;
         }
         else{
             ans=max(ans,(min(height[i],height[j])*(j-i)));
             j--;
         }
         }
    
        return ans;
    }
}; 