class Solution {
  public:
    vector<int> getAreas(int L , int W , int B , int H , int R) {
        vector<int> ans;
        ans.push_back(L*W);
        ans.push_back(0.5*B*H);
        ans.push_back(3.14*R*R);
        return ans;
    }
};
