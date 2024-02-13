class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a=1;
        bool ispow=false;
        while(a<=n && a>0){
            if(a==n){
                ispow=true;
                break;
            }
            a=a<<1;
        }
        return ispow;

    }
};
