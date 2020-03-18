using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,one=0,two=0,zero=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            switch(x)
            {
                case 0: zero++;
                        break;
                case 1: one++;
                        break;
                case 2: two++;
                        break;
            }
        }
        while(zero!=0)
        {
            cout<<"0 ";
            zero--;
        }
        while(one!=0)
        {
            cout<<"1 ";
            one--;
        }
        while(two!=0)
        {
            cout<<"2 ";
            two--;
        }
        cout<<endl;
    }
}
