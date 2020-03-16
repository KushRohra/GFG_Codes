using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,d,n;
        cin>>a>>b>>n;
        d=b-a;
        b=a+(n-1)*d;
        cout<<b<<endl;
    }
}
