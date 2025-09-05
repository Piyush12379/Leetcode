class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        for(int i=0;i<n;i++){
           arr[i]=start+2*i;
        }
        
        int x=start;
        for(int i=1;i<n;i++){
            x=x^arr[i];
        }
        return x;
 

    }
};