class Solution
{
public:
    vector<int> getXor(vector<int> A, int N)
    {
        vector<int> ans;
        int x=0;
        for(auto ele:A)
            x^=ele;
        for(auto ele:A) {
            ans.push_back(x^ele);
        }
        return ans;
    }
};
