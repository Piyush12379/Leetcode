class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

    int n=nums.size();
    vector<int>v(n);


    for(int i=0;i<n;i++){
        v[nums[i]-1]++;
    }

    int missing=0,duplicate=0;
    for(int i=0;i<n;i++){
         if(v[i]==0){
            missing=i+1;
         }
         else if(v[i]>1){
            duplicate=i+1;
         }
    }
     return{duplicate,missing};


    }
};