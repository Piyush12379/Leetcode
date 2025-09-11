class Solution {
public:
    string sortVowels(string s) {
        string st="";
        for(char n:s){
            if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U'){
                st.push_back(n);
            }
        }
        sort(st.begin(),st.end());
        int i=0;
       for(int j=0;j<s.length();j++){
            if(s[j]=='a'||s[j]=='A'||s[j]=='e'||s[j]=='E'||s[j]=='i'||s[j]=='I'||s[j]=='o'||s[j]=='O'||s[j]=='u'||s[j]=='U'){
                s[j]=st[i];
                i++;
            }
        }

        return s;
         
         


    }
};