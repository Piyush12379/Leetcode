class Solution {
public:
    bool isPalindrome(string s) {

     int n=s.length();
     int i=0;
     int j=n-1;
     
     string k1="";
     string k2="";
     for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            k2+=tolower(s[i]);
        }
     }

     for(int i=s.length()-1;i>=0;i--){
        if(isalnum(s[i])){
            k1+=tolower(s[i]);
        }
     }
     return k2==k1;



    }
};