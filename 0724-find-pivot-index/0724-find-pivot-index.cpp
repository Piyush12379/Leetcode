class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;

        for(int i=0;i<n;i++){
               total+=nums[i];
        }
        int left=0;
        for(int i=0;i<n;i++){

            left+=nums[i];
            if(left==total-left+nums[i]){
                return i;
            }
        }
        return -1;
    }
};