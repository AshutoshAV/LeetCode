class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res; res.clear();
        int left=0,right=numbers.size()-1;
        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(target==sum){
                res.push_back(left+1);
                res.push_back(right+1);
                break;
                // left++; right--;
                // continue;
            } else if(target>sum){
                left++;
                continue;
            } else {
                right--;
                continue;
            }
        }
        return res;
    }
};
