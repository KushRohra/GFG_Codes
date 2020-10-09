class Solution {
  public:
    int oddAndEven(string S) {
        int i,oddSum=0, evenSum=0;
        for(i=0;i<S.length();i++) {
            if((i+1)%2)
                oddSum+=S[i]-'0';
            else evenSum+=S[i]-'0';
        }
        return oddSum==evenSum ? 1 : 0;
    }
};
