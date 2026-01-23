class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            int sum= -1 * nums[i];
            while(j<k){
                  if(nums[j]+nums[k]==sum){
                          res.push_back({nums[i],nums[j],nums[k]});
                          j++;
                          k--;
                     
                     while(j<k && nums[j]==nums[j-1]){
                        j++;
                     }
                     while(j<k && nums[k]==nums[k+1]){
                        k--;
                     }
                  }
                else if(nums[j]+nums[k]>sum){
                       k--;
                }
                else{
                    j++;
                }
                 
            }
              
        }
        return res;
    }
};