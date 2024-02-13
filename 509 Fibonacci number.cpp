class Solution {
public:
    int arr[31];

    int fibo(int n) {

            if(arr[n]==-1) {
                return arr[n] = fibo(n-1) + fibo(n-2);
            } else {
                return arr[n];
            }

    }

    int fib(int n) {
        memset(arr,-1,sizeof(arr));
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        fibo(n);
        return arr[n];
    }
};
