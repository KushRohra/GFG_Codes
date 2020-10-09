#include <iostream>
using namespace std;
int max(int a, int b) {
    return a>b ? a : b;
}
char max(char a, char b) {
    return a>b ? a : b;
}
double max(double a, double b) {
    return a>b ? a : b;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int choice,a1,b1;
	    char a2,b2;
	    double a3,b3;
	    cin>>choice;
	    if(choice==1) {
	        cin>>a1>>b1;
	        cout<<max(a1,b1)<<endl;
	    }
	    else if(choice==2) {
	        cin>>a2>>b2;
	        cout<<max(a2,b2)<<endl;
	    }
	    else {
	        cin>>a3>>b3;
	        cout<<max(a3,b3)<<endl;
	    }
	}
	return 0;
}
