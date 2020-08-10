#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    string student="";
	    int avgScore=0;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++) {
            string s;
            int s1,s2,s3,avg;
            cin>>s>>s1>>s2>>s3;
            avg=(s1+s2+s3)/3;
            if(avg>avgScore) {
                avgScore=avg;
                student=s;
            }
            else if(avg==avgScore) {
                student+=" "+s;
            }
	    }
	    cout<<student<<" "<<avgScore<<endl;
	}
	return 0;
}
