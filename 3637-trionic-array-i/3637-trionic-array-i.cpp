class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<4) return false;
        
        if(nums[0]>=nums[1]) return false;
        int i=1;
        while(i<n-1 && nums[i]<nums[i+1]){
            i++;
        }
        if(i==n-1) return false;
        int j=i;
        while(j<n-1 && nums[j]>nums[j+1]){
            j++;
        }
         if(j==n-1) return false;
         int k=j;
        while(k<n-1 && nums[k]<nums[k+1]){
            k++;
        }
        if(k==n-1) return true;
        return false;
    }
};