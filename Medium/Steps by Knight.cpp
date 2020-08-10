#include<bits/stdc++.h>
using namespace std;
typedef pair<pair<int, int>, int> ppi;
bool isSafe(int x, int y, int n)
{
    if(x>0 && y>0 && y<=n && x<=n)  
        return true;
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int vis[n+1][n+1];
        memset(vis,0,sizeof(vis));
        int startPosX, startPosY, endPosX, endPosY;
        cin>>startPosX>>startPosY>>endPosX>>endPosY;
        queue<ppi> q;
        int ans=INT_MAX, x, y, dist, newX, newY;
        vis[startPosX][startPosY]=1;
        int X[]={1,1,-1,-1,2,2,-2,-2};
        int Y[]={2,-2,2,-2,1,-1,1,-1};
        q.push({{startPosX, startPosY}, 0});
        while(!q.empty()) {
            x=q.front().first.first;
            y=q.front().first.second;	
            dist=q.front().second;
            q.pop();
            //cout<<x<<" "<<y<<" "<<dist<<endl;
            if(x==endPosX && y==endPosY)
                ans=min(ans,dist);
            for(int i=0;i<8;i++) {
                newX=x+X[i];
                newY=y+Y[i];
                if(isSafe(newX, newY, n) && !vis[newX][newY]) {
                    vis[newX][newY]=1;
                    q.push({{newX, newY}, dist+1});
                }
            }
        }
        //q.clear();
        if(ans==INT_MAX)
            cout<<"1"<<endl;
        else cout<<ans<<endl;
    }
}

