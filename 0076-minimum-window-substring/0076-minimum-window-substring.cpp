class Solution {
public:

    bool sahi(unordered_map<char,int>&have,unordered_map<char,int>&required){
         
         for(auto it: have){
               if(it.second>required[it.first]){
                return false;
               }
         }
         return true;

    }


    string minWindow(string s, string t) {
        unordered_map<char,int>have;
        unordered_map<char,int>required;
        int minlen=INT_MAX;
        for(char c: t) have[c]++;
        int left=0;
        int start=0;

        for(int right=0;right<s.length();right++){
            required[s[right]]++;

            while(sahi(have,required)){
                int len=right-left+1;
                if(len<minlen){
                    minlen=len;
                    start=left;
                }
                required[s[left]]--;
                left++;
            }

        }



       return minlen==INT_MAX?"":s.substr(start,minlen);

    }
};