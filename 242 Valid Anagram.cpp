class Solution {
public:
    int scount[26];
    int tcount[26];
    bool isAnagram(string s, string t) {
        char c;
        int ssize=s.size();
        int tsize=t.size();
        bool answer=true;
        for(int i=0;i<ssize;i++){
            c=s[i]-'a';
            scount[c]++;
        }
        for(int i=0;i<tsize;i++){
            c=t[i]-'a';
            tcount[c]++;
        }
        for(int i=0;i<26;i++){
            if(tcount[i]!=scount[i]){
                answer=false;
                break;
            }
        }
        return answer;
    }
};
