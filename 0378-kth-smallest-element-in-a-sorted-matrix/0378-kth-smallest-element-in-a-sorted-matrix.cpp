class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n= matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        for(int i=0;i<n;i++){
            v.insert(v.end(),matrix[i].begin(),matrix[i].end());
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};