class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>>arr;
          arr.push_back(nums);
        bool hasnext=next_permutation(nums.begin(),nums.end());
        while(hasnext){
            arr.push_back(nums);
            hasnext=next_permutation(nums.begin(),nums.end());
        }     
        return arr;   
    }
};