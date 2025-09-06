class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>arr(nums.size(),0);
        int prod=1;
        int count=0;
        int index=-1;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0){ 
                count++;
                index=i;
            }
            else prod=prod*nums[i];
         }
         
        if(count>1) return arr;
        else if(count==1) {
            arr[index]=prod;
            return arr;
        }

        for(int i=0;i<nums.size();i++){
            arr[i]=prod/nums[i];
        }
        return arr;
    }
};