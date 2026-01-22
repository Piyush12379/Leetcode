class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        int count=0;
        vector<int>newarr;
        newarr.push_back(nums[0]);
        while(j<n){
            if(nums[i]==nums[j]) j++;
            else{
                swap(nums[i+1],nums[j]);
                count++;
                i++;
                j++;
                newarr.push_back(nums[i]);
            }
        
        }
        return newarr.size();

    }
};