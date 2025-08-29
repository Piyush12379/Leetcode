class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                v.push_back(arr[i]);
            }
        }
      
        return v;
    }
};