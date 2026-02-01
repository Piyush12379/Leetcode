class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n= nums.size();
        int left=0;
        int count=0;
        int maxlength=INT_MIN;
        
        for(int right=0;right<n;right++){
             
             if(nums[right]==1) count++;
            
            while(left<right && right-left+1-count>k){
                if(nums[left]==1) count--;
                 left++;
            }

            if(count>=1||k>=1){
            maxlength=max(maxlength,right-left+1);
            }         

        }
        return maxlength==INT_MIN?0:maxlength;
       
    }
};