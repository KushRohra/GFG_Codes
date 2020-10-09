int remainderWith7(string n)
{
    int no=0;
    for(int i=0;i<n.length();i++) {
        no=no*10+(n[i]-'0');
        no%=7;
    }
    return no;
}
