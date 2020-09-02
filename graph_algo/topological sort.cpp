// author -: Sheikh Farhan //
//topological sort//
// O(v+e) recursion "toposort" thought is gud//
// dfs jesa hi hai but changes h thoda// 

# include <bits/stdc++.h>
using namespace std;

void toposort(stack<int>& s,int visit[],int i,vector < int > path[]){
	visit[i] = 1;
	for(auto x: path[i]){
		if(visit[x] == 0){
			toposort(s,visit,x,path);
		}
	}
	s.push(i);
}

int solve(vector < int > path[],int n,int m){
	int i,visit[n]; for(i=0;i<n;i++){visit[i]=0;}
	stack <int> s;
	for(i=0;i<n;i++){
		if(visit[i] == 0){
			toposort(s,visit,i,path);
		}
	}

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}	

}

int main(){
	int n,m; cin>>n>>m;
	int i,j;
	vector < int > path[n];
		for(i=0;i<m;i++){
			int x,y; cin>>x>>y;
			path[x].push_back(y);
		}
		solve(path,n,m);
		cout<<endl;

}