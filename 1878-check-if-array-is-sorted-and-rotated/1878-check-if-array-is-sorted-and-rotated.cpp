class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
   
        for(int i=0;i<n;i++){
          if(mini>=nums[i]){
            mini=nums[i];
            
          }
        }

        for(int idx=0;idx<n;idx++){
       if(nums[idx]==mini){

        int pos=n-idx;
        vector<int>v2(n,-1);
        for(int i=0;i<n;i++){
          v2[(i+pos) % n]=nums[i]; 
        }
         bool sorted=true;
        for(int i=1;i<v2.size();i++){
            if(v2[i]<v2[i-1]) {
                sorted= false;
                break;
            };
        }
        if(sorted) return true;

        }
        }

        return false;
        
        
    }
};