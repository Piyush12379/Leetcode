class Solution {
public:
    bool Vowel(char c){
         c=tolower(c);
         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
         return false;
    }

    string reverseVowels(string s) {
        string res;
        for(char c:s){
            if(Vowel(c)){
                 res.push_back(c);
                 }
    }
     reverse(res.begin(),res.end());

      string newt;
      int k=0;
      for(int i=0;i<s.length();i++){
        if(Vowel(s[i])){
            newt.push_back(res[k]);
            k++;
        }
        else{
            newt.push_back(s[i]);
        }
      }
      return newt;

    }
};