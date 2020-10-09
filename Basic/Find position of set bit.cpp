class Solution {
  public:
    int findPosition(int N) {
        if(N==0)
            return -1;
        int c=0,n=N;
        while(n) {
            n&=(n-1);
            c++;
            if(c>1)
                return -1;
        }
        for(int i=0;i<32;i++) {
            if((N & (1<<i)))
                return i+1;
        }
        return -1;
    }
};
