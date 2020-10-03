#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=0,i,n,sum,x;
		cin>>n>>sum;
		map<int, int> m;
		vector<int> a(n,0);
		for(i=0;i<n;i++) {
			cin>>a[i];
		    m[a[i]]++;
		}
		for(auto it=m.begin();it!=m.end();it++) {
		    int x=sum-(it->first);
		    //cout<<it->first<<" "<<it->second<<" "<<x<<" "<<m[x]<<"\n";
		    if(x==it->first) {
		        int y=m[x];
		        m.erase(x);
		        c=c+(y*(y-1))/2;
		    }
		    else {
		        int y1,y2;
		        y1=m[x];
		        y2=it->second;
		        m.erase(x);
		        m.erase(it->first);
		        c+=(y1*y2);
		    }
		}
		cout<<c<<endl;
	}
}
