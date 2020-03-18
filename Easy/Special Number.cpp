using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a[n],j,max=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    vector<long long int> dp;
    for(i=0;i<max+1;i++)
    {
        if(i<6)
            dp.push_back(i);
        else
        {
            for(j=0;j<6;j++)
            {
                dp.push_back(dp[i-5]*10+j);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<dp[a[i]-1]<<endl;
    }
}

