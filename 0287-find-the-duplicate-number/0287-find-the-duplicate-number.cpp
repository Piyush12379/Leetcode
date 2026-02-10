class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n-1);
        for(int i=0;i<nums.size();i++){
            v[nums[i]-1]++;
            if(v[nums[i]-1]>1) return nums[i];
        }
        return -1;
    }
};