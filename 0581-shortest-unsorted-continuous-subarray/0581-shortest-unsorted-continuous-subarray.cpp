class Solution {
public:


vector<int> getSubarray(vector<int>& arr, int i, int j) {
    return vector<int>(arr.begin() + i, arr.begin() + j + 1);
}

    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        
          int left = 0, right = n - 1;

        while (left < n - 1 && nums[left] <= nums[left + 1]) {
            left++;
        }

        if (left == n - 1) return 0; // already sorted

        while (right > 0 && nums[right] >= nums[right - 1]) {
            right--;
        }
           int mini = INT_MAX, maxi = INT_MIN;
        for (int i = left; i <= right; i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }

        
        while (left > 0 && nums[left - 1] > mini) {
            left--;
        }

       
        while (right < n - 1 && nums[right + 1] < maxi) {
            right++;
        }
        vector<int> sub = getSubarray(nums, left, right);

        return sub.size();

    }
};