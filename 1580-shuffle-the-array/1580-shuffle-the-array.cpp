class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=nums.size();
        int mid=i+(j-i)/2;
       int k=mid;
       vector<int>v;
        while(i<mid ||k<j){
            if(i<mid)v.push_back(nums[i]);
            if(k<j)v.push_back(nums[k]);
            i++;
            k++;
        }
        return v;

    }
};