#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int i,a,b,n;
	    cin>>n;
	    unordered_map<int, int> snake, ladder;
		unordered_set<int> s;
	    for(i=0;i<n;i++) {
	        cin>>a>>b;
	        if(a>b)
	            snake[a]=b;
	        else ladder[a]=b;
	    }
	    queue<pair<int, int> > q;
	    int ans=INT_MAX;
	    q.push({1,0});
	    while(!q.empty()) {
	        int newPos, pos=q.front().first, dist=q.front().second;
	        q.pop();
	        if(s.find(pos)!=s.end())
	            continue;
	        s.insert(pos);
	        //cout<<pos<<" "<<dist<<" \n";
	        if(pos==30)
	            ans=min(ans,dist);
	        for(int i=1;i<=6;i++) {
	            newPos=pos+i;
	            if(newPos>30) continue;
	            if(ladder.find(newPos)!=ladder.end())
	                newPos=ladder[newPos];
	            if(snake.find(newPos)!=snake.end())
	                newPos=snake[newPos];
	            q.push({newPos,dist+1});
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
