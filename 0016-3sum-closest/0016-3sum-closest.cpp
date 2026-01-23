class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n= nums.size();
         int maxdiff=INT_MAX;
         int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
           int j= i+1;
           int k=n-1;
        //    int sum = -1*nums[i]
        
           while(j<k){

             int diff= abs(target-(nums[i]+nums[j]+nums[k]));
             if(diff<maxdiff){
                maxdiff=diff;
                sum=nums[i]+nums[j]+nums[k];
             }

               if(nums[j]+nums[k]+nums[i]== target){
                   j++;
                   k--;
               }
               else if(nums[j]+nums[k]+nums[i]>target){
                  k--;
               }
               else{
                 j++;
               }
             
           }

        }
        return sum;

    }
};