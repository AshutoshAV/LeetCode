class Solution {
public:
    vector<string> valid;
    void gen(string& s,int open,int close,int n){
        if(open<n){
            s.push_back('(');
            gen(s,open+1,close,n);
            s.pop_back();
        }
        if(open>close && close<n){
            s.push_back(')');
            gen(s,open,close+1,n);
            s.pop_back();
        }
        if(open==n && close==n){
            valid.push_back(s);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        string s;
        gen(s,open,close,n);
        return valid;

    }
};
