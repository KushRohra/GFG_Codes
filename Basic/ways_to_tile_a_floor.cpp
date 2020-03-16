using namespace std;
int main() 
{
    long long int n,i;
    cin>>n;
    long long int a[n],max=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=max)
            max=a[i];
    }
    long long int v[max+1]={0};
    v[0]=1;
    v[1]=1;
    for(i=2;i<max+1;i++)
    {
        v[i]+=v[i-1]+v[i-2];
    }
    for(i=0;i<n;i++)
        cout<<v[a[i]]<<endl;
