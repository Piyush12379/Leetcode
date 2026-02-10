class Solution {
public:
    int fun(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_map<int,int>mp;
        // int slow=n;
        int fast=n;
        while(fast!=1){
            // slow=fun(slow);
            // fast=fun(fast);
            mp[fast]++;
            if(mp[fast]>1) return false;
            fast=fun(fast);

        }
        return true;
    }
};