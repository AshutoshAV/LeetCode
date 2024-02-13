class Solution {
public:
    int count[1001];
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        int size1=nums1.size();
        int size2=nums2.size();
        int num;
        for(int i=0;i<size1;i++){
            num=nums1[i];
            count[num]++;
        }
        for(int i=0;i<size2;i++){
            num=nums2[i];
            if(count[num]){
                answer.push_back(num);
                count[num]--;
            }
        }
        return answer;
    }
};
