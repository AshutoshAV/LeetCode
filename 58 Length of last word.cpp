class Solution {
public:
    int lengthOfLastWord(string s) {
        int wordlen=0;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]==' ' && wordlen) break;
            if(s[i]==' ' && !wordlen) continue;
            else if (s[i]!=' ') wordlen++;
        }
        return wordlen;
    }
};
