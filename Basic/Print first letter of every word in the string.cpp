class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string ans="",temp="";
	    for(int i=0;i<S.length();i++) {
	        if(S[i]==' ') {
	            ans+=temp[0];
	            temp="";
	        }
	        else temp+=S[i];
	    }
	    ans+=temp[0];
	    return ans;
	}
};
