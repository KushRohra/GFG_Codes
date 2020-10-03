char* countSort(char arr[]) {
    int m[26];
    memset(m,0,sizeof(m));
    int i=0;
    for(;arr[i]!='\0';i++)
        m[arr[i]-'a']++;
    int p=0;
    for(char c='a';c<='z';c++) {
        if(m[c-'a']!=0) {
            while(m[c-'a']--) {
                arr[p++]=c;
            }
        }
    }
    return arr;
}
