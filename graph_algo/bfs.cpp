// author -: Sheikh Farhan //
//bfs//
//O(n+m)//
# include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,m; cin>>n>>m;
	vector <int> path[n];
	
		for(i=0;i<m;i++){
			int x,y; cin>>x>>y;
			path[x].push_back(y); 
		}

	int visit[n]={0};
	queue<int>q;
	q.push(0);
		while(!q.empty()){
			int temp = q.front();
			if(visit[temp] == 0){cout<<temp<<" ";}
			q.pop();
			visit[temp]=1;
			for(auto x:path[temp]){
				if(visit[x] == 0){q.push(x);}
			}
		}
	cout<<endl;
}
