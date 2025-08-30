class Solution {
public:
    bool isSameAfterReversals(int num) {
         
        int n=num;
        int rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }

        int rev1=0;
        int next=rev;
          while(next>0){
            int rem=next%10;
            rev1=rev1*10+rem;
            next=next/10;
        }


        return rev1==num;
    
    }
};