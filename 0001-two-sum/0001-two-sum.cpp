class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=0;
        for(int i=0;i<n-1;i++ ){
            if(i>0 && nums[i]==nums[i-1]) continue;
                j=i+1;
            while(j<n){
                int sum=nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                }
                j++;
            }
        }
        return{i,j};
        
    }
};