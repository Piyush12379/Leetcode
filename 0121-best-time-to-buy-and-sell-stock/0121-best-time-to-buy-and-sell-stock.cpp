class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int mini=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<n;i++){
          mini=min(mini,arr[i]);
          maxProfit=max(maxProfit,arr[i]-mini);
        }
        return maxProfit;
    }
};