vector<int> SortBinaryArray(vector<int> binArray)
{
    int i=0, j=binArray.size() - 1, len=binArray.size();
    while(i<j) {
        if(binArray[i]==1) {
            swap(binArray[i], binArray[j]);
            j--;
        }
        else i++;
    }
    return binArray;
}
