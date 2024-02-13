class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si=0,ti=0;
        bool answer;
        if(s.size()>t.size()) return false;

        while(ti<t.size()){
            if(s[si]==t[ti]) {
                si++;
                ti++;
                continue;
            } else {
                ti++;
                continue;
            }
        }
        return (si==s.size())?true:false;
    }
};
