class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

       deque<int>dq; //for storing the indices of sliding window for maximum
       vector<int>res;//stores the corresponding max indixes value

       for(int i=0;i<nums.size();i++){

        //maintaing  the size of window
         if(!dq.empty() && dq.front()==i-k){
            //if it exceeds the size of th window then pop the elemnt from the front
           dq.pop_front();
         }

          //for the maimum value in the current value
         while(!dq.empty() && nums[i]>=nums[dq.back()]){
            dq.pop_back();
         }
         dq.push_back(i);

         if(i>=k-1){
             res.push_back(nums[dq.front()]);
         }


       }
        return res;
       
    }
};