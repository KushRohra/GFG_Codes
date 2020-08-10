bool isChar(char x) {
    if(x>='A' && x<='Z')
        return true;
    if(x>='a' && x<='z')
        return true;
    return false;
}
bool checkPangram (string &str)
{
    int i;
    vector<bool> v(26,0);
    for(i=0;i<str.length();i++) {
        if(isChar(str[i])) {
            str[i]=tolower(str[i]);
            v[str[i]-'a']=1;
        }
    }
    for(i=0;i<26;i++)
        if(!v[i])
            return 0;
    return 1;
}
