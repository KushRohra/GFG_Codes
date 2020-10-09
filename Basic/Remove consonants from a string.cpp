#include <iostream>
using namespace std;
bool isVowel(char x) {
    switch(x) {
        case 'a': return 1;
        case 'e': return 1;
        case 'i': return 1;
        case 'o': return 1;
        case 'u': return 1;
        default: return 0;
    }
}
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
	    string s,ans="";
	    getline(cin,s);
	    for(int i=0;i<s.length();i++) {
	        if(isVowel(tolower(s[i])) || s[i]==' ')
	            ans+=s[i];
	    }
	    if(ans.length()==0)
	        cout<<"No Vowel\n";
	    else cout<<ans<<endl;
	}
	return 0;
}
