class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int minprod=nums[0];
        int bestprod=nums[0];
  
        for(int i=1;i<nums.size();i++){     
            int v1= nums[i];
            int v2=nums[i]* maxprod;
            int v3=nums[i]*minprod;
           maxprod=max({v1,v2,v3});
           minprod=min({v1,v2,v3});
           bestprod=max(bestprod,maxprod);
        }

        return bestprod;


    }
};