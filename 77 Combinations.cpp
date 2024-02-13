class Solution {
public:
    vector<vector<int>> allset;
    vector<int> set;
    void gen(vector<int> &set,int n, int k, int i){
        if(k==set.size()){
            allset.push_back(set);
            return;
        }
    while(i<=n){
                set.push_back(i);
        gen(set,n,k,i+1);
        set.pop_back();
        i++;
    }


    }
    vector<vector<int>> combine(int n, int k) {
        gen(set,n,k,1);
        return allset;
    }
};
