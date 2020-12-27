int majorityElement(int a[], int size) {
    int count = 1, i, majorIndex = 0;
    for(i=1;i<size;i++) {
        if(a[i] == a[majorIndex])
            count++;
        else count--;
        if(count == 0) {
            count = 1;
            majorIndex = i;
        }
    }
    count = 0;
    for(i=0;i<size;i++) {
        if(a[i] == a[majorIndex]) {
            count++;
        }
    }
    if(count > size/2)
        return a[majorIndex];
    else return -1;
}
