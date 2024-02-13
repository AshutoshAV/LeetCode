class Solution {
public:
    int hash[100];
    char q;
    int n;
    string frequencySort(string s) {
        string answer;
        int size=s.size();
        for(int i=0;i<size;i++) {
            n=s[i]-'0';
            hash[n]++;
        }

        int max=0;
        for(int i=0;i<100;i++) {
            if(hash[i]>max) max=hash[i];
        }

        for(int i=max;i>0;i--) {
            for(int j=0;j<100;j++ ){
                if(hash[j]==i){
                    for(int ctr=0;ctr<i;ctr++) {
                        q=j+'0';
                answer.push_back(q);
            }
                }
            }

        }
        return answer;
    }
};
