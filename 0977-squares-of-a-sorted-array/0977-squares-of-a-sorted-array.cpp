class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n= nums.size();
        
        vector<int>a,b;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
         
        for(int i=0;i<a.size();i++){
            a[i]=a[i]*a[i];
        }

        for(int i=0;i<b.size();i++){
            b[i]=b[i]*b[i];
        }

        reverse(b.begin(),b.end());

        if(a.size()==0){
            return b;
        }
        if(b.size()==0){
            return a;
        }

        int i=0;
        int j=0;
        int k=0;
        while(i<a.size() && j<b.size()){
             if(a[i]<=b[j]){
                nums[k]=a[i];
                i++;
                k++;
             }
             else{
                nums[k]=b[j];
                j++;
                k++;
             }  
 }

  while(i<a.size()){
    nums[k]=a[i];
    i++;
    k++;
  }


 while(j<b.size()){
    nums[k]=b[j];
    j++;
    k++;
  }



  return nums;
   

        




    }
};