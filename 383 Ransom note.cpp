class Solution {
public:
    int scount[26];
    int tcount[26];
    bool canConstruct(string ransomNote, string magazine) {
        char c;
        int ssize=ransomNote.size();
        int tsize=magazine.size();
        bool answer=true;
        for(int i=0;i<ssize;i++){
            c=ransomNote[i]-'a';
            scount[c]++;
        }
        for(int i=0;i<tsize;i++){
            c=magazine[i]-'a';
            tcount[c]++;
        }
        for(int i=0;i<26;i++){
            if(tcount[i]<scount[i]){
                answer=false;
                break;
            }
        }
        return answer;

    }
};
