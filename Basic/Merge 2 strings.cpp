#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n1,n2,i=0,j=0;
	    string sol="",s1,s2;
	    cin>>s1>>s2;
	    n1=s1.length();
	    n2=s2.length();
	    while(i<n1 && j<n2) {
	        sol+=s1[i];
	        sol+=s2[j];
	        i++;
	        j++;
	    }
	    while(i<n1) {
	        sol+=s1[i];
	        i++;
	    }
	    while(j<n2) {
	        sol+=s2[j];
	        j++;
	    }
	    cout<<sol<<endl;
	}
	return 0;
}
