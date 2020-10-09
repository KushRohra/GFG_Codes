class Solution {
  public:
    int nthCarol(int N) {
        if(N==1)
            return 1;
       return pow(4,N)-pow(2,N+1)-1;
    }
};
