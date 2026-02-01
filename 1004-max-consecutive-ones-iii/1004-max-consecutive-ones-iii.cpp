class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size();
        int left = 0;
        int count = 0;      // count of 1s
        int maxlength = 0;

        for (int right = 0; right < n; right++) {

            if (nums[right] == 1) count++;

            while (right - left + 1 - count > k) {
                if (nums[left] == 1) count--;
                left++;
            }

            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;
    }
};
