class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int deleteone=arr[0];
        int nodelete=arr[0];
        int maxi=arr[0];
        for(int i=1;i<arr.size();i++){
             
            int prevnodelete=nodelete;
            nodelete=max(arr[i],nodelete+arr[i]);
            deleteone=max(deleteone+arr[i],prevnodelete);
            maxi=max({maxi,deleteone,nodelete});
        }
        return maxi;
    }
};