class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
           sum^=num;
        }
        return sum;
    }
};