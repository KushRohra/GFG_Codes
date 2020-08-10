typedef pair<int, int> ppi;
int *mergeKArrays(int arr[][N], int k)
{
    int i;
    priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
    for(i=0;i<k;i++) 
        pq.push({arr[i][0], i});
    int *a=new int[k*k];
    int index, val;
    i=0;
    vector<int> pos(k,1);
    while(!pq.empty())
    {
        val=pq.top().first;
        index=pq.top().second;
        pq.pop();
        a[i++]=val;
        if(pos[index]<k)
        {
            pq.push({arr[index][pos[index]],index});
            pos[index]++;
        }
    }
    return a;
}
