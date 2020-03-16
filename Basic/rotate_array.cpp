using namespace std;
#include<queue>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,d,x;
        queue<int> q;
        cin>>n>>d;
        for(i=0;i<n;i++)
        {
            cin>>x;
            q.push(x);
        }
        for(i=0;i<d;i++)
        {
            x=q.front();
            q.pop();
            q.push(x);
        }
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }
