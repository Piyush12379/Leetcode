class Solution {
public:
    int calPoints(vector<string>&num) {
    
        vector<int>v;
        for(int i=0;i<num.size();i++){
             if(num[i] == "+"){
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else if(num[i]=="D"){
                v.push_back(v[v.size()-1]*2);
            }
            else if(num[i]=="C"){
                v.pop_back();
            }
            else {
                v.push_back(stoi(num[i]));
                
            }
        }
    
    int sum=0;
    for(int n:v){
        sum+=n;
    }
       return sum;

    }
};