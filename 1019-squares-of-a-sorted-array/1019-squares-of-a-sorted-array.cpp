class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        for(int num:nums){
            nums[i]=num*num;
            i++;
        }

       sort(nums.begin(),nums.end());
       return nums;
    }
};