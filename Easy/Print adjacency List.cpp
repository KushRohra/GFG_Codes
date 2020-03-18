// The Graph structure is as folows
// Function to print graph
// adj: array of vectors to represent graph
// V: number of vertices
void printGraph(vector<int> adj[], int V)
{
   for(int i=0;i<V;i++)
   {
       cout<<i;
       for(auto k=adj[i].begin();k!=adj[i].end();k++)
       {
           cout<<"-> "<<*k;
       }
       cout<<endl;
   }
}

