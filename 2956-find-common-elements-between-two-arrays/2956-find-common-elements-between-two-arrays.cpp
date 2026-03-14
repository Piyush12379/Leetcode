class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp1,mp2;
       for(int i=0;i<nums1.size();i++){
          mp1[nums1[i]]++;
       }
       for(int i=0;i<nums2.size();i++){
         mp2[nums2[i]]++;
       }

        int count1=0;
        int count2=0;
       for(int i=0;i<nums1.size();i++){
         if(mp2[nums1[i]]>=1) count1++;
  
       }

        for(int i=0;i<nums2.size();i++){
         if(mp1[nums2[i]]>=1) count2++;
  
       }

       return {count1,count2};
       

    }
};