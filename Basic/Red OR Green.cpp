class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int r=0,g=0;
           for(auto ch:S) {
               if(ch=='R')
                    r++;
               else g++;
           }
           return min(r,g);
    }
};
