#include <iostream>
using namespace std;
bool find(string s)
{
    int evenCount=0, oddCount=0, i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            if(i%2==0)
                evenCount++;
            else oddCount++;
        }
    }
    return abs(evenCount-oddCount)%3==0 ? 1 : 0; 
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<find(s)<<endl;
    }
}
