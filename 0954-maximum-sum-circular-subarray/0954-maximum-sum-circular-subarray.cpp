class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currmax=0;
        int maxsum=nums[0];
        int currmin=0;
        int minsum=nums[0];
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
          
          currmax=max(currmax+nums[i],nums[i]);
          maxsum=max(maxsum,currmax);

          currmin=min(currmin+nums[i],nums[i]);
          minsum=min(minsum,currmin);

          total+=nums[i];
        }
        if(total==minsum) return maxsum;
        return max(maxsum,total-minsum);
    }
};