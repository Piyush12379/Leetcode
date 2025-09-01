class Solution {
public:
    int smallestEvenMultiple(int n) {
    
        int num;
      
         for(int i=n;(i%2)!=0;i+=n){
              num=i;
         }
         return num+n;
    }
};