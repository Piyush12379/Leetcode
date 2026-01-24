class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxlen=INT_MAX;
        int left=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
               maxlen=min(right-left+1,maxlen);
               sum-=nums[left];
               left++;
            }

        }
        return maxlen==INT_MAX?0:maxlen;    
    } 
};