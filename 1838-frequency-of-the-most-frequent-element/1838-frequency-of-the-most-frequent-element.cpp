class Solution {
public:
    int maxFrequency(vector<int>&arr , int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();

        int left=0;
        int maxlen=0;
        long long sum=0;
        int len=0;
        // int window_size=0;
        for(int right=0;right<n;right++){
          sum+=arr[right];
      
          while((long long)arr[right]*(right-left+1)-sum>k){
            sum-=arr[left];
            left++;
          }
          len=right-left+1;

          maxlen=max(maxlen,len);

        }
        return maxlen;
    }
};