class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1;
        n--;
        m--;
        while(m<i){
            if(m==-1){
                nums1[i]=nums2[n];
                n--;
                i--;
                continue;
            }
            if(nums1[m]>nums2[n]){
                nums1[i]=nums1[m];
                m--;
                i--;
            }else{
                nums1[i]=nums2[n];
                n--;
                i--;
            }
        }
    }
};
