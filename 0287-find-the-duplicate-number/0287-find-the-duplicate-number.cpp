class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow=0;
        int fast=0;
        while(true){
            slow=a[slow];
            fast=a[fast];
            fast=a[fast];
            if(slow==fast){
                 slow=0;
                 while(slow!=fast){
                    slow=a[slow];
                    fast=a[fast];
                 }
                 return slow;
            }
        }
        return -1;
    }
};