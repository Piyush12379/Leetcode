class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int minprod=nums[0];
        int bestprod=nums[0];
  
        for(int i=1;i<nums.size();i++){     
            if(nums[i]<0) swap(maxprod,minprod);  
           maxprod=max(maxprod*nums[i],nums[i]);
           minprod=min(minprod*nums[i],nums[i]);
           bestprod=max(bestprod,maxprod);
        }

        return bestprod;


    }
};