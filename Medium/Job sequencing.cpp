#include<bits/stdc++.h>
using namespace std;
struct Job
{
  int id; int profit; int deadline;  
};
bool comp(Job a, Job b)
{
    return a.profit>b.profit;
}
int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int n,i,y,z,x; cin>>n;
        vector<Job> v(n);
        for(i=0;i<n;i++) 
        {
            cin>>x>>z>>y;
            v[i].id=x; v[i].profit=y; v[i].deadline=z;
        }
        sort(v.begin(), v.end(), comp);
        /*for(i=0;i<n;i++)
            cout<<v[i].id<<" "<<v[i].profit<<" "<<v[i].deadline<<endl;*/
        vector<bool> finish(n, 0);
        vector<int> v1;
        int c=0, profit=0;
        for(i=0;i<n;i++)
        {
        	if(c==n)
        		break;
        	int time=min(n,v[i].deadline-1);
        	for(int j=time;j>=0;j--)
        	{
        		if(!finish[j])
        		{
        			finish[j]=1;
        			c++;
        			profit+=v[i].profit;
        			v1.push_back(v[i].id);
        			break;
				}
			}
			/*for(int p=0;p<n;p++)
				cout<<finish[p]<<" ";
			cout<<endl;*/
		}/*
		for(i=0;i<v1.size();i++)
			cout<<v1[i]<<" ";
		cout<<endl;*/
		cout<<c<<" "<<profit<<endl;
    }
}
/*
	1
	4
	1 4 20 
	2 1 10 
	3 1 40 
	4 1 30
*/
