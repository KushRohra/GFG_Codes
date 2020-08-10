#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int> > &A)
{
    if(A.size()==0 || A[0].size()==0)
        return 0;
    int r=A.size(), c=A[0].size(), i;
    int min1=INT_MAX, max1=INT_MIN;
    for(i=0;i<r;i++)
    {
        min1=min(min1, A[i][0]);
        max1=max(max1, A[i][c-1]);
    }
    int desired=(r*c+1)/2;
    while(min1<max1)
    {
        int mid=min1+(max1-min1)/2;
        int place=0;
        for(i=0;i<r;i++)
           place += upper_bound(A[i].begin(),A[i].end(),mid) - A[i].begin();
        if(place<desired)
            min1=mid+1;
        else max1=mid;
    }
    return min1;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c, i, j;
        cin>>r>>c;
        vector<vector<int>> v(r, vector<int> (c,0));
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                cin>>v[i][j];
        cout<<median(v)<<endl;
    }
}
