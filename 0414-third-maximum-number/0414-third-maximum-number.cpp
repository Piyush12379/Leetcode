class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long maxi=LLONG_MIN;
        long long secmax=LLONG_MIN;
        long long thirdmax=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi || nums[i]==secmax ||nums[i]==thirdmax) continue;

           if(nums[i]>maxi){
                thirdmax=secmax;
                secmax=maxi;
                maxi=nums[i];
           }
           else if(nums[i]>secmax){
             thirdmax=secmax;
             secmax=nums[i];
           }
           else if(nums[i]>thirdmax){
              thirdmax=nums[i];
           }
        }
     
    if(thirdmax==LLONG_MIN) return maxi;
        return  thirdmax;
    }
};