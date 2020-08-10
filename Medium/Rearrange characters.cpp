#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unordered_map<char, int> mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        int ma=INT_MIN;
        for(auto it=mp.begin();it!=mp.end();it++)
            ma=max(ma,it->second);
        if(ma>s.length()/2)
            cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
}
