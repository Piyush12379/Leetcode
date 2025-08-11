class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j;
        int n= nums.size();
        vector<int>res;
        while(i<n){
            j=i+1;
        while(j<n){
            if(nums[i]+nums[j]==target){
                res.push_back(i);
                res.push_back(j);
                return res;
            };
            j++;
        }
        i++;
        }
        return res;
    }
};