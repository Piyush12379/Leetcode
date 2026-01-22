class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

     int n= nums.size();
     int i=0;
     int j=n-1;
     int pos=n-1;
     vector<int>res(n);
     
    while(i<=j){
       if(abs(nums[i])>abs(nums[j])){
          res[pos]=nums[i]*nums[i];
          i++;
          pos--;
       } 
       else{
          res[pos]=nums[j] *nums[j];
          j--;
          pos--;
       }        

    }

      return res;
                  
    }
};