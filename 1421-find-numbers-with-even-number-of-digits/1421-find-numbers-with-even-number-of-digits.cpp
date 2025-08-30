class Solution {
public:
     int digit(int num){
        int count=0;
        while(num>0){
            count++;
            num=num/10;
        }
        return count;
     }

    int findNumbers(vector<int>& nums) {
        int c=0;
           for(int num:nums){
              if(digit(num)%2==0) c++;
           }
           return c;
    }
};