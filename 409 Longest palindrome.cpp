class Solution {
public:
    int hash[128];
    int longestPalindrome(string s) {
        int size=s.size();
        for(int i=0;i<size;i++) {
            hash[s[i]]++;
        }

        int pair=0,single=0;
	for(int i=0;i<128;i++) {
		pair+=hash[i]/2 * 2;
		single+= hash[i]%2;
	}
	int len=(single)?pair+1:pair;
        return len;
    }
};
