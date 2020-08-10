int minIndexChar(string str, string patt) {
    int i;
    unordered_map<char, int> m;
    for(i=0;i<str.length();i++) {
        if(m.find(str[i])==m.end())
            m[str[i]]=i;
    }
    int ans=INT_MAX;
    for(i=0;i<patt.length();i++) {
        if(m.find(patt[i])!=m.end())
            if(m[patt[i]]<ans)
                ans=m[patt[i]];
    }
    if(ans==INT_MAX)
        return -1;
    return ans;
}
