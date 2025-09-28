class Solution {
public:
    int maxProfit(vector<int>&arr) {
        int n=arr.size();
       int mini=INT_MAX;
       int profit=0;
       for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            else{
                profit=max(profit,arr[i]-mini);
            }
       }
       return profit;


    }
};