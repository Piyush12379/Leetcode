class Solution {
public:
    int totalFruit(vector<int>& fruits) {
          int n=fruits.size();
           unordered_map<int,int>mp;
           int low=0;
           int maxlength=INT_MIN;
          for(int right=0;right<n;right++){
               mp[fruits[right]]++;
               while(mp.size()>2){
                  mp[fruits[low]]--;
                  if(mp[fruits[low]]==0){
                       mp.erase(fruits[low]);
                  }
                  low++;
               }
              
               maxlength=max(maxlength,right-low+1);
          }
          return maxlength;


        
    }
};