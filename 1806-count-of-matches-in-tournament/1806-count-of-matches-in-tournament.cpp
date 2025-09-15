class Solution {
public:
      int check(int n){
        if((n%2)==0) return n/2;
        return ((n-1)/2)+1;
      }


    int numberOfMatches(int n) {
            
            int match=0;
             int team=n;
             int adv=0;
        if((n%2)==0){
                while(team>1){
                match+=(team/2);
                team=check(team);
              }
        }
        else{
              while(team>1){
                match+=(team/2);
                team=check(team);
              }
        }
        return match;

        
    }
};