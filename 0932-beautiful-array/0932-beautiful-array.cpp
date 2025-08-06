class Solution {
public:
    vector<int> beautifulArray(int n) {
     vector<int>res;
     res.push_back(1);
     
     while(res.size()<n){
     vector<int>temp;
     for(int i=0;i<res.size();i++){
        if(2*res[i]-1<=n) temp.push_back(2*res[i]-1);
     }
     for(int i=0;i<res.size();i++){
        if(2*res[i]<=n) temp.push_back(2*res[i]);
     }
     res=temp;
     }

      return res;
    }
};