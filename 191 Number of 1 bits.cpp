class Solution {
public:
    int hammingWeight(uint32_t n) {
        int len=32;
        int bits=0;
        while(len--){

            if(n&1) bits++;
            n=n>>1;

        }
        return bits;

    }
};
