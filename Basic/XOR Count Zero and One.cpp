#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int odd=0, even=0;
        while(n)
        {
            if(n%2)
                even++;
            else odd++;
            n/=2;
        }
        even^=odd;
        cout<<even<<endl;
    }
}
