class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

     return {firstoccurence(nums,target),lastoccurence(nums,target)};   
    }

    int firstoccurence(vector<int>v,int target){
                 int n=v.size();
                 int low=0;
                 int high=n-1;
                 int ans=-1;
                 while(low<=high){
                    int mid=low+(high-low)/2;
                    if(v[mid]==target){
                          ans=mid;
                          high=mid-1;
                    }
                    else if(v[mid]>target){
                        high=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                 }
                 return ans;
    }


    int lastoccurence(vector<int>v,int target){
        int n= v.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid]==target){
                 ans=mid;
                 low=mid+1;
            }
            else if(v[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }



};