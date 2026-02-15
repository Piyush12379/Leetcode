class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum=nums[0];
        int normalmax=nums[0];
        int totalsum=0;
        int minsum=nums[0];
        int ans1=nums[0];
        int ans2=nums[0];
 
        for(int i=0;i<nums.size();i++){
             totalsum+=nums[i];
        }

        for(int i=1;i<nums.size();i++){
              maxsum=max(maxsum+nums[i],nums[i]);
              ans2=max(maxsum,ans2);

             minsum=min(nums[i],minsum+nums[i]);
             ans1=min(minsum,ans1);
        }

        if(ans2<0){
            return ans2;
        }

        return max(totalsum-ans1,ans2);
    }
};