class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        v.push_back(nums);
        bool hasnext = next_permutation(nums.begin(),nums.end());
        while(hasnext){
            v.push_back(nums);
            hasnext = next_permutation(nums.begin(),nums.end());
        }
        return v;

    }
};