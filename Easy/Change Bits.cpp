class Solution {
  public:
    vector<int> changeBits(int N) {
        int i=0,no=0,c=0,temp=N;
        while(N!=0) {
            no=pow(2,i)+no;
            i++;
            N/=2;
        }
        int diff=no-temp;
        vector<int> ans;
        ans.push_back(diff);
        ans.push_back(no);
        return ans;
    }
};
