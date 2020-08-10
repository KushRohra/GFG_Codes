#include <iostream>
using namespace std;
int lcs(string s1, string s2, int n, int m)
{
    int lcs[n+1][m+1], len=0;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                lcs[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                lcs[i][j]=lcs[i-1][j-1]+1;
                len=max(len, lcs[i][j]);
            }
            else lcs[i][j]=0;
        }
    }
    return len;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        string s1, s2;
        cin>>s1>>s2;
        cout<<lcs(s1, s2, n, m)<<endl;
    }
}
