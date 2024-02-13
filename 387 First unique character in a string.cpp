class Solution {
public:
    int count[26];
    int firstUniqChar(string s) {
        int size=s.size();
        char c;
        int index=-1;
        for(int i=0;i<size;i++){
            c=s[i]-'a';
            count[c]++;
        }
        for(int i=0;i<size;i++){
            c=s[i]-'a';
            if(count[c]==1){
                index=i;
                break;
            }
        }
        return index;
    }
};
