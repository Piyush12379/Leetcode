class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         if(k<=1) return 0;
        int left=0;
    
        int prod=1;
        int count=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
           prod*=nums[right];
           while(prod>=k){
              prod=prod/nums[left];
              left++;
           }
           count+=(right-left+1);
        }
        return count;


    }
};