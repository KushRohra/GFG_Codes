#include <bits/stdc++.h>
using namespace std;
vector<int> getCommon(vector<int> A, vector<int> B) {
    vector<int> v;
    int i=0,j=0,n=A.size(),m=B.size();
    while(i<n && j<m) {
        if(A[i]==B[j]) {
            if(v.size()==0 || A[i]!=v[v.size()-1])
                v.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j]) 
            i++;
        else j++;
    } 
    return v;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n1,n2,n3,i;
	    cin>>n1>>n2>>n3;
	    vector<int> v1(n1),v2(n2),v3(n3);
	    for(i=0;i<n1;i++)
	        cin>>v1[i];
	    for(i=0;i<n2;i++)
	        cin>>v2[i];
	    for(i=0;i<n3;i++)
	        cin>>v3[i];
	    vector<int> v;
	    v=getCommon(v1,v2);
	    v=getCommon(v,v3);
	    if(v.size()==0)
	        cout<<"-1\n";
	    else {
    	    for(i=0;i<v.size();i++)
    	        cout<<v[i]<<" ";
    	    cout<<endl;
	    }
	}
	return 0;
}
