// author -: Sheikh Farhan //
//dfs//
// O(n+m) //
# include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,m; cin>>n>>m;
	vector <int> path[n];
	
		for(i=0;i<m;i++){
			int x,y; cin>>x>>y;
			path[x].push_back(y);
			path[y].push_back(x); 
		}

	int visit[n]={0};
	stack <int> s;
	s.push(0);
	while(!s.empty()){
		int temp = s.top();
		if(visit[temp]==0){cout<<temp<<" ";}
		visit[temp]=1;
		s.pop();
		for(auto x:path[temp]){
			if(visit[x] == 0){s.push(x);}
		}
	}
	cout<<endl;

}