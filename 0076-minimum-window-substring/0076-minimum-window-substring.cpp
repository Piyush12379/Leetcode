class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";

        vector<int> freq(128, 0);   // ASCII
        for(char c : t) freq[c]++;

        int required = t.size();
        int i = 0, j = 0;
        int minLen = INT_MAX;
        int start = 0;

        while(j < s.size()){
            // expand window
            if(freq[s[j]] > 0) required--;
            freq[s[j]]--;
            j++;

            // shrink window
            while(required == 0){
                if(j - i < minLen){
                    minLen = j - i;
                    start = i;
                }

                freq[s[i]]++;
                if(freq[s[i]] > 0) required++;
                i++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
