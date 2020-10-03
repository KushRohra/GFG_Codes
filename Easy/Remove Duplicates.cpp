class Solution{
public:	
		
	string removeDups(string S) {
	    unordered_set<char> s;
	    string ans="";
	    for(auto ch:S) {
	        if(s.find(ch)==s.end()) {
	            s.insert(ch);
	            ans+=ch;
	        }
	    }
	    return ans;
	}
};
