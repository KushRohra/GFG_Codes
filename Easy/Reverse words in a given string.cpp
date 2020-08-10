void reverseWords(char *s) {
    int i;
    string temp="";
    vector<string> v;
    for(i=0;s[i]!='\0';i++) {
        if(s[i]=='.')  {
            v.push_back(temp);
            temp="";
        }
        else temp+=s[i];
    }
    v.push_back(temp);
    for(i=v.size()-1;i>0;i--) {
        cout<<v[i]<<".";
    }
    cout<<v[0];
}

