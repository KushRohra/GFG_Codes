#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> v, int &start, int &finish)
{
    finish=-1;
    start=0;
    int sum=0, max=INT_MIN, local_start;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        if(sum<0)
        {
            sum=0;
            local_start=i+1;
        }
        else if(sum>max)
        {
            max=sum;
            start=local_start;
            finish=i;
        }
    }
    if(finish!=-1)
        return max;
    start=0; finish=0; max=v[0];
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            finish=i;
            start=i;
        }
    }
    return max;
}
int maxSumRect(vector<vector<int>> v)
{
    int n=v.size(), m=v[0].size(), i, j, maxSum=INT_MIN, left, right, top, bottom, start, finish;
    for(int l=0;l<m;l++)
    {
        vector<int> temp(n,0);
        for(int r=l;r<m;r++)
        {
            for(i=0;i<n;i++)
                temp[i]+=v[i][r];
            int sum=kadane(temp, start, finish);
            if(sum>maxSum)
            {
                maxSum=sum;
                left=l;
                right=r;
                top=start;
                bottom=finish;
            }
        }
    }
    return maxSum;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, i, j;
        cin>>n>>m;
        vector<vector<int>> v(n, vector<int> (m,0));
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>v[i][j];
        cout<<maxSumRect(v)<<endl;
    }
}
