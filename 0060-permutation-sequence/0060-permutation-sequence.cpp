class Solution {
public:
    string getPermutation(int n, int k) {
       int  rev=0;
        int rem=1;
        while(n>0){
            rev=rev*10+rem;
            rem++;
            n--;
        }
        string str=to_string(rev);
        
        for(int i=0;i<k-1;i++){
            bool hasnext=next_permutation(str.begin(),str.end());
            if(!hasnext) break;
        }
        return str;


    }
};