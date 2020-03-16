using namespace std;
#include<stack>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n;
        stack<int> s;
        while(n!=0)
        {
            x=n%10;
            if(s.empty())
            {
                s.push(x);
                n=n/10;
            }
            else
            {
                if(s.top()!=x)
                    s.push(x);
                n=n/10;
            }
        }
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
