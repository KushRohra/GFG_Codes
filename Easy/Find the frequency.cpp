* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x)
{
    unordered_map<int,int> m;
    for(auto k=v.begin();k!=v.end();k++)
    {
        m[*k]++;
    }
    return m[x];
}
