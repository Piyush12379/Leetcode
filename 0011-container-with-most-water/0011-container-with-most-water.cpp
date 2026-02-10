class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int mini,maxi;
        int maxarea=INT_MIN;
        while(left<right){
            mini=min(height[left],height[right]);
            maxarea=max(maxarea,mini*(right-left));
            (mini==height[left])?left++:right--;
        }
        return maxarea;
    }
};