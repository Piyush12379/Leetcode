class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        for(int i=n-1;i>0;i--){
             if(nums[i]<nums[i-1]){
                   idx=i;
             }
        }
        int pos=n-idx;
        vector<int>v2(n,-1);
        for(int i=0;i<n;i++){
            v2[(pos+i)%n]=nums[i];
        }
          
        for(int i=n-1;i>0;i--){
             if(v2[i]<v2[i-1]){
                   return false;
             }
        }
        return true;


    }
};