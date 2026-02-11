class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>v;
        int n=jewels.size();
        for(int i=0;i<n;i++){
            v[jewels[i]]++;
        }

      int count=0;
        for(int j=0;j<stones.size();j++){
            if(v[stones[j]]>=1) count++;
        }
        return count;
    }
};