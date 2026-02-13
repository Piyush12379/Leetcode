class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int maxsum=arr[0];
        int minsum=arr[0];
        int currsum=arr[0];
        int currsum2=arr[0];
        
        for(int i=1;i<arr.size();i++){
        
        currsum=max(currsum+arr[i],arr[i]);
        currsum2=min(currsum2+arr[i],arr[i]);
        maxsum=max(currsum,maxsum);
        minsum=min(minsum,currsum2);       
        }

        return max(abs(minsum),abs(maxsum));
    }
};