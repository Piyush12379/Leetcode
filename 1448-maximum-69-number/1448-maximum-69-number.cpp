class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        while(num>0){
            int rem=num%10;
            v.push_back(rem);
            num=num/10;
        }
        reverse(v.begin(),v.end());

        
        for(int i=0;i<v.size();i++){
            if(v[i]==6){
                v[i]=9;
                break;
            }
        }

        int rev=0;
        for(int j=0;j<v.size();j++){
         rev=rev*10+v[j];
        }
        return rev;



    }
};